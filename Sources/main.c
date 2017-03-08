/* ###################################################################
**     Filename    : main.c
**     Project     : HL_K22F_0.1
**     Processor   : MK22FN512VDC12
**     Version     : Driver 01.01
**     Compiler    : GNU C Compiler
**     Date/Time   : 2016-12-08, 18:14, # CodeGen: 0
**     Abstract    :
**         Main module.
**         This module contains user's application code.
**     Settings    :
**     Contents    :
**         No public methods
**
** ###################################################################*/
/*!
** @file main.c
** @version 01.01
** @brief
**         Main module.
**         This module contains user's application code.
*/         
/*!
**  @addtogroup main_module main module documentation
**  @{
*/         
/* MODULE main */


/* Including needed modules to compile this module/procedure */
#include "Cpu.h"
#include "Events.h"
#include "Pins1.h"
#include "LED1.h"
#include "LEDpin1.h"
#include "BitIoLdd1.h"
#include "KSDK1.h"
#include "WAIT1.h"
#include "BT1.h"
#include "Serial1.h"
#include "ASerialLdd1.h"
#include "CLS1.h"
#include "UTIL1.h"
#include "CS1.h"
#include "LEDRouge.h"
#include "PpgLdd1.h"
#include "AD2.h"
#include "AdcLdd2.h"
#include "AD1.h"
#include "AdcLdd1.h"
#include "GI2C1.h"
#include "CI2C1.h"
#include "LEDVerte.h"
#include "PpgLdd3.h"
#include "LEDBlanche.h"
#include "PpgLdd2.h"
/* Including shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
#include "PDD_Includes.h"
#include "Init_Config.h"
/* User includes (#include below this line is not maintained by Processor Expert) */
#include "SendData.h"
#include "lumiere.h"
/*lint -save  -e970 Disable MISRA rule (6.3) checking. */
int main(void)
/*lint -restore Enable MISRA rule (6.3) checking. */
{
  /* Write your local variable definition here */

  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  PE_low_level_init();
  /*** End of Processor Expert internal initialization.                    ***/

  /* Write your code here */
  /* For example: for(;;) { } */

/********************************** PARTIE BLUETOOTH **************************************/
  char testsensor[]="";
  char dataSend[]="";
  uint16_t reference;
  unsigned char receiveChar = 0;
  uint16_t intensity;
  short inten;
  uint8_t lumiref;
  uint8_t lumi;
  uint16_t freq;
  char inputDatas[15];

  /*On initialise les LED*/ 
  LEDVerte_Disable();
  LEDBlanche_Disable();
  LEDRouge_Disable();
  
  /*Debut du protocol Bluetooth*/
  while (receiveChar != 'W') {
	  BT1_RecvChar(&receiveChar);		//Tant qu'on a pas de W on essaye de recevoir
  }

/* Capteur de Luminosite */
 lumiere_reference();

/* Contenu de la trame presence des capteurs */
  char sensorInitial[] = "";		//On définit les différents états des composants
  sensorInitial[0] = 0x27;		//EEG 		   -> off
  sensorInitial[1] = 0x4B;		//Capteur Cardiaque-> off
  sensorInitial[2] = 0x64;		//Capteur Paupière -> on
  sensorInitial[3] = 0x84;		//Gyro X 	   -> on
  sensorInitial[4] = 0xA4;		//Gyro Y 	   -> on
  sensorInitial[5] = 0xC4;		//Gyro Z 	   -> on
  sensorInitial[6] = 0xF5;		//Capteur Peau 	   -> off

  BT1_SendChar('S');			//Début d'envoie de la trame
  for (int l = 0; l < 7; l++) {
	  BT1_SendChar(sensorInitial[l]); // Envoie de la trame présence
	  WAIT1_Waitms(1);
  }
  BT1_SendChar('E');			//Fin d'envoie de la trame
  WAIT1_Waitms(3000);
  
  int i;

  while (receiveChar != 'B') {
	  BT1_RecvChar(&receiveChar);	//La tablette envoie "B" -> Trame présence Bien reçu
  if(receiveChar == 'B')		//On allume une LED de la carte pour signifier qu'on a bien envoyer la trame 
  {					//et qu'elle a bien été reçu
	  LED1_On();
	  WAIT1_Waitms(500);
	  LED1_Off();
  }

  /*Début de la séance*/
  while (receiveChar != 'X') {				//Si on a un X le programme s'arrête totalement
  		BT1_RecvChar(&receiveChar);
  		while (receiveChar != 'S') {
  			  BT1_RecvChar(&receiveChar);	//Tant qu'on a pas de S on essaye de recevoir
  		}
  		if(receiveChar == 'S'){			//Si un on reçoit un S, la trame commence
  			uint8_t lumi;
  			for (i = 0; i < 15; i++) {
  				WAIT1_Waitms(1);
  				receiveChar = ERR_RXEMPTY;		//On nettoie le buffer pour avoir une réception simple
									//et ne pas recevoir un char en plusieurs fois
  				while(receiveChar == ERR_RXEMPTY){	//Si rien de nouveau reçu on relance une réception
  					BT1_RecvChar(&receiveChar);
  				}
  				if (receiveChar == 'E'){		//Si on recoit char E alors la réception de la trame tablette est terminée
  					break; 				//On sort de la réception
  				}
  				inputDatas[i] = receiveChar;		//On met les données dans un buffer de données
  				lumiere_initialisation(inputDatas);
  			}
  		}
  // Récupération de la donnée du capteur de Lumière	
  	(void)AD1_Measure(TRUE); 		//do conversion and wait for the result 
  	(void)AD1_GetValue16(&reference);

  /*Envoie des données des capteurs pour les afficher dans les capteurs*/
  for(int i=0; i<10000; i++){			//On envoie 10 000 données ( cette partie est à modifier ...)
  	sendData(reference);			//Appel de la fonction sendData qui envoie les données des capteurs à la tablette
    	lumiere_gestion(inputDatas);		//ligne de code util pour l'algorithme du capteur de lumière
  }

  LEDVerte_Disable();		//On éteint la LED de la carte qui signifie que la séance est terminée
  LED1_Off();
  }
/********************************** FIN DE LA PARTIE BLUETOOTH **************************************/


  /*** Don't write any code pass this line, or it will be deleted during code generation. ***/
  /*** RTOS startup code. Macro PEX_RTOS_START is defined by the RTOS component. DON'T MODIFY THIS CODE!!! ***/
  #ifdef PEX_RTOS_START
    PEX_RTOS_START();                  /* Startup of the selected RTOS. Macro is defined by the RTOS component. */
  #endif
  /*** End of RTOS startup code.  ***/
  /*** Processor Expert end of main routine. DON'T MODIFY THIS CODE!!! ***/
  for(;;){}
  /*** Processor Expert end of main routine. DON'T WRITE CODE BELOW!!! ***/
}
}/*** End of main routine. DO NOT MODIFY THIS TEXT!!! ***/

/* END main */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
