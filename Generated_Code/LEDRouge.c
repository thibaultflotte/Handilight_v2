/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : LEDRouge.c
**     Project     : HL_K22F_0.1
**     Processor   : MK22FN512VDC12
**     Component   : PPG
**     Version     : Component 02.195, Driver 01.00, CPU db: 3.00.000
**     Repository  : Kinetis
**     Compiler    : GNU C Compiler
**     Date/Time   : 2016-12-14, 14:48, # CodeGen: 22
**     Abstract    :
**         This component "PPG" implements a programmable
**         pulse generator that generates signal with variable
**         duty and variable cycle (period).
**     Settings    :
**          Component name                                 : LEDRouge
**          Compare - period                               : FTM0_MOD
**          Compare - duty                                 : FTM0_C4V
**          Output pin                                     : PTD4/LLWU_P14/SPI0_PCS1/UART0_RTS_b/FTM0_CH4/FBa_AD2/EWM_IN/SPI1_PCS0
**          Counter                                        : FTM0_CNT
**          Interrupt service/event                        : Enabled
**            Interrupt on period                          : INT_FTM0
**            Interrupt on duty                            : INT_FTM0
**            Interrupt priority                           : medium priority
**            Iterations before action/event               : 1
**          Period                                         : 60 Hz
**          Starting pulse width                           : 12.499809 ms
**          Initial polarity                               : low
**          Same period in modes                           : no
**          Component uses entire timer                    : no
**          Initialization                                 : 
**            Enabled in init. code                        : yes
**            Events enabled in init.                      : yes
**          CPU clock/speed selection                      : 
**            High speed mode                              : This component enabled
**            Low speed mode                               : This component disabled
**            Slow speed mode                              : This component disabled
**          Referenced components                          : 
**            PPG_LDD                                      : PPG_LDD
**     Contents    :
**         Enable        - byte LEDRouge_Enable(void);
**         Disable       - byte LEDRouge_Disable(void);
**         SetPeriodUS   - byte LEDRouge_SetPeriodUS(word Time);
**         SetPeriodMS   - byte LEDRouge_SetPeriodMS(word Time);
**         SetPeriodSec  - byte LEDRouge_SetPeriodSec(word Time);
**         SetPeriodReal - byte LEDRouge_SetPeriodReal(float Time);
**         SetFreqHz     - byte LEDRouge_SetFreqHz(word Freq);
**         SetFreqkHz    - byte LEDRouge_SetFreqkHz(word Freq);
**         SetFreqMHz    - byte LEDRouge_SetFreqMHz(word Freq);
**         SetRatio8     - byte LEDRouge_SetRatio8(byte Ratio);
**
**     Copyright : 1997 - 2015 Freescale Semiconductor, Inc. 
**     All Rights Reserved.
**     
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**     
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**     
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**     
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**     
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**     
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file LEDRouge.c
** @version 01.00
** @brief
**         This component "PPG" implements a programmable
**         pulse generator that generates signal with variable
**         duty and variable cycle (period).
*/         
/*!
**  @addtogroup LEDRouge_module LEDRouge module documentation
**  @{
*/         

/* MODULE LEDRouge. */

#include "Events.h"
#include "LEDRouge.h"

/*
** ===================================================================
**     Method      :  LEDRouge_Enable (component PPG)
**     Description :
**         This method enables the component - it starts the signal
**         generation. Events may be generated (<DisableEvent>
**         /<EnableEvent>).
**     Parameters  : None
**     Returns     :
**         ---             - Error code, possible codes:
**                           ERR_OK - OK
**                           ERR_SPEED - This device does not work in
**                           the active speed mode
** ===================================================================
*/
/*
byte LEDRouge_Enable(void)
**  This method is implemented as a macro. See LEDRouge.h file.  **
*/

/*
** ===================================================================
**     Method      :  LEDRouge_Disable (component PPG)
**     Description :
**         This method disables the component - it stops the signal
**         generation and events calling. When the timer is disabled,
**         it is possible to call <ClrValue> and <SetValue> methods.
**     Parameters  : None
**     Returns     :
**         ---             - Error code, possible codes:
**                           ERR_OK - OK
**                           ERR_SPEED - This device does not work in
**                           the active speed mode
** ===================================================================
*/
/*
byte LEDRouge_Disable(void)
**  This method is implemented as a macro. See LEDRouge.h file.  **
*/

/*
** ===================================================================
**     Method      :  LEDRouge_SetPeriodUS (component PPG)
**     Description :
**         This method sets the new period of the output signal. The
**         period is expressed in microseconds as a 16-bit unsigned integer
**         number.
**         This method is only available when the runtime setting type
**         'from interval' is selected in the Timing dialog box of
**         the Runtime setting area.
**     Parameters  :
**         NAME       - DESCRIPTION
**         Time       - Period to set [in microseconds]
**                      (501 to 16666 microseconds)
**     Returns     :
**         ---        - Error code, possible codes:
**                           ERR_OK - OK
**                           ERR_SPEED - This device does not work in
**                           the active speed mode
**                           ERR_MATH - Overflow during evaluation
**                           ERR_RANGE - Parameter out of range
** ===================================================================
*/
byte LEDRouge_SetPeriodUS(word Time)
{
  LDD_TError tmp;

  tmp = PpgLdd1_SetPeriodUS(PpgLdd1_DeviceData, (uint16_t)Time);
  if (tmp == ERR_PARAM_RANGE) {
    return ERR_RANGE;
  }
  return (byte)tmp;
}

/*
** ===================================================================
**     Method      :  LEDRouge_SetPeriodMS (component PPG)
**     Description :
**         This method sets the new period of the output signal. The
**         period is expressed in milliseconds as a 16-bit unsigned integer
**         number.
**         This method is only available when the runtime setting type
**         'from interval' is selected in the Timing dialog box of
**         the Runtime setting area.
**     Parameters  :
**         NAME       - DESCRIPTION
**         Time       - Period to set [in milliseconds]
**                      (1 to 16 milliseconds)
**     Returns     :
**         ---        - Error code, possible codes:
**                           ERR_OK - OK
**                           ERR_SPEED - This device does not work in
**                           the active speed mode
**                           ERR_MATH - Overflow during evaluation
**                           ERR_RANGE - Parameter out of range
** ===================================================================
*/
byte LEDRouge_SetPeriodMS(word Time)
{
  LDD_TError tmp;

  tmp = PpgLdd1_SetPeriodMS(PpgLdd1_DeviceData, (uint16_t)Time);
  if (tmp == ERR_PARAM_RANGE) {
    return ERR_RANGE;
  }
  return (byte)tmp;
}

/*
** ===================================================================
**     Method      :  LEDRouge_SetPeriodSec (component PPG)
**     Description :
**         This method sets the new period of the output signal. The
**         period is expressed in seconds as a 16-bit unsigned integer
**         number.
**         This method is only available when the runtime setting type
**         'from interval' is selected in the Timing dialog box of
**         the Runtime setting area.
**     Parameters  :
**         NAME       - DESCRIPTION
**         Time       - Period to set [in seconds]
**         Note: The interval is too narrow. The method will return
**               just the error code.
**     Returns     :
**         ---        - Error code, possible codes:
**                           ERR_OK - OK
**                           ERR_SPEED - This device does not work in
**                           the active speed mode
**                           ERR_MATH - Overflow during evaluation
**                           ERR_RANGE - Parameter out of range
** ===================================================================
*/
byte LEDRouge_SetPeriodSec(word Time)
{
  LDD_TError tmp;

  tmp = PpgLdd1_SetPeriodSec(PpgLdd1_DeviceData, (uint16_t)Time);
  if (tmp == ERR_PARAM_RANGE) {
    return ERR_RANGE;
  }
  return (byte)tmp;
}

/*
** ===================================================================
**     Method      :  LEDRouge_SetPeriodReal (component PPG)
**     Description :
**         This method sets the new period of the output signal. The
**         period is expressed in seconds as a real number.
**         This method is only available when the runtime setting type
**         'from interval' is selected in the Timing dialog box of
**         the Runtime setting area.
**     Parameters  :
**         NAME       - DESCRIPTION
**         Time       - Period to set [in seconds]
**                      (0.000500106812 to 0.016666793823 seconds)
**     Returns     :
**         ---        - Error code, possible codes:
**                           ERR_OK - OK
**                           ERR_SPEED - This device does not work in
**                           the active speed mode
**                           ERR_MATH - Overflow during evaluation
**                           ERR_RANGE - Parameter out of range
** ===================================================================
*/
byte LEDRouge_SetPeriodReal(TPE_Float Time)
{
  LDD_TError tmp;

  tmp = PpgLdd1_SetPeriodReal(PpgLdd1_DeviceData, (LDD_PPG_Tfloat)Time);
  if (tmp == ERR_PARAM_RANGE) {
    return ERR_RANGE;
  }
  return (byte)tmp;
}

/*
** ===================================================================
**     Method      :  LEDRouge_SetFreqHz (component PPG)
**     Description :
**         This method sets the new frequency of the output signal. The
**         frequency is expressed in Hz as a 16-bit unsigned integer
**         number.
**         This method is only available when the runtime setting type
**         'from interval' is selected in the Timing dialog box of
**         the Runtime setting area.
**     Parameters  :
**         NAME       - DESCRIPTION
**         Freq       - Frequency to set [in Hz]
**                      (60 to 1999 Hz)
**     Returns     :
**         ---        - Error code, possible codes:
**                           ERR_OK - OK
**                           ERR_SPEED - This device does not work in
**                           the active speed mode
**                           ERR_MATH - Overflow during evaluation
**                           ERR_RANGE - Parameter out of range
** ===================================================================
*/
byte LEDRouge_SetFreqHz(word Freq)
{
  LDD_TError tmp;

  tmp = PpgLdd1_SetFrequencyHz(PpgLdd1_DeviceData, (uint16_t)Freq);
  if (tmp == ERR_PARAM_RANGE) {
    return ERR_RANGE;
  }
  return (byte)tmp;
}

/*
** ===================================================================
**     Method      :  LEDRouge_SetFreqkHz (component PPG)
**     Description :
**         This method sets the new frequency of the output signal. The
**         frequency is expressed in kHz as a 16-bit unsigned integer
**         number.
**         This method is only available when the runtime setting type
**         'from interval' is selected in the Timing dialog box of
**         the Runtime setting area.
**     Parameters  :
**         NAME       - DESCRIPTION
**         Freq       - Frequency to set [in kHz]
**                      (1 to 1 kHz)
**     Returns     :
**         ---        - Error code, possible codes:
**                           ERR_OK - OK
**                           ERR_SPEED - This device does not work in
**                           the active speed mode
**                           ERR_MATH - Overflow during evaluation
**                           ERR_RANGE - Parameter out of range
** ===================================================================
*/
byte LEDRouge_SetFreqkHz(word Freq)
{
  LDD_TError tmp;

  tmp = PpgLdd1_SetFrequencykHz(PpgLdd1_DeviceData, (uint16_t)Freq);
  if (tmp == ERR_PARAM_RANGE) {
    return ERR_RANGE;
  }
  return (byte)tmp;
}

/*
** ===================================================================
**     Method      :  LEDRouge_SetFreqMHz (component PPG)
**     Description :
**         This method sets the new frequency of the output signal. The
**         frequency is expressed in MHz as a 16-bit unsigned integer
**         number.
**         This method is only available when the runtime setting type
**         'from interval' is selected in the Timing dialog box of
**         the Runtime setting area.
**     Parameters  :
**         NAME       - DESCRIPTION
**         Freq       - Frequency to set [in MHz]
**         Note: The interval is too narrow. The method will return
**               just the error code.
**     Returns     :
**         ---        - Error code, possible codes:
**                           ERR_OK - OK
**                           ERR_SPEED - This device does not work in
**                           the active speed mode
**                           ERR_MATH - Overflow during evaluation
**                           ERR_RANGE - Parameter out of range
** ===================================================================
*/
byte LEDRouge_SetFreqMHz(word Freq)
{
  LDD_TError tmp;

  tmp = PpgLdd1_SetFrequencyMHz(PpgLdd1_DeviceData, (uint16_t)Freq);
  if (tmp == ERR_PARAM_RANGE) {
    return ERR_RANGE;
  }
  return (byte)tmp;
}

/*
** ===================================================================
**     Method      :  LEDRouge_SetRatio8 (component PPG)
**     Description :
**         This method sets a new duty-cycle ratio. The ratio is
**         expressed as an 8-bit unsigned integer number. Value 0 - 255
**         is proportional to ratio 0 - 100%. 
**         Note: Calculated duty depends on the timer possibilities and
**         on the selected period.
**         The method is available only if method <SetPeriodMode> is
**         not selected.
**     Parameters  :
**         NAME            - DESCRIPTION
**         Ratio           - Ratio to set. 0 - 255 value is
**                           proportional to ratio 0 - 100%
**     Returns     :
**         ---             - Error code, possible codes:
**                           ERR_OK - OK
**                           ERR_SPEED - This device does not work in
**                           the active speed mode
** ===================================================================
*/
/*
byte LEDRouge_SetRatio8(byte Ratio)
**  This method is implemented as a macro. See LEDRouge.h file.  **
*/

/*
** ===================================================================
**     Method      :  LEDRouge_OnEnd (component PPG)
**
**     Description :
**         The method services the interrupt of the selected peripheral(s)
**         and eventually invokes event(s) of the component.
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
void PpgLdd1_OnEnd(LDD_TUserData *UserDataPtr)
{
  (void)UserDataPtr;                   /* Parameter is not used, suppress unused argument warning */
  LEDRouge_OnEnd();                    /* Invoke OnEnd event */
}

/* END LEDRouge. */

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