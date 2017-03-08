/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : Cpu.h
**     Project     : HL_K22F_0.1
**     Processor   : MK22FN512VDC12
**     Component   : MK22FN512DC12
**     Version     : Component 01.048, Driver 01.00, CPU db: 3.00.000
**     Repository  : Kinetis
**     Datasheet   : K22P121M120SF7RM, Rev. 1, March 24, 2014
**     Compiler    : GNU C Compiler
**     Date/Time   : 2016-12-08, 18:14, # CodeGen: 0
**     Abstract    :
**         This file collects Processor Expert components configuration 
**         and interface files.
**     Settings    :
**          Component name                                 : Cpu
**          CPU type                                       : MK22FN512VDC12
**          CPU                                            : CPU
**          MemModelDev                                    : MemModel_NoFlexMem
**          Clock settings                                 : 
**            Clock sources                                : 
**              Internal oscillator                        : 
**                Slow internal reference clock [kHz]      : 32.768
**                Initialize slow trim value               : no
**                Fast internal reference clock [MHz]      : 4
**                Initialize fast trim value               : no
**              RTC oscillator                             : Disabled
**              System oscillator 0                        : Disabled
**            Clock source settings                        : 1
**              Clock source setting 0                     : 
**                Internal reference clock                 : 
**                  MCGIRCLK clock                         : Enabled
**                  MCGIRCLK in stop                       : Disabled
**                  MCGIRCLK source                        : Slow
**                  MCGIRCLK clock [MHz]                   : 0.032768
**                External reference clock                 : 
**                  OSC0ERCLK clock                        : Enabled
**                  OSC0ERCLK in stop                      : Disabled
**                  OSC0ERCLK clock [MHz]                  : 0
**                  ERCLK32K clock source                  : Auto select
**                  ERCLK32K. clock [kHz]                  : 0.001
**                MCG settings                             : 
**                  MCG mode                               : FEI
**                  MCG output clock                       : FLL clock
**                  MCG output [MHz]                       : 20.97152
**                  MCG external ref. clock source         : System oscillator 0
**                  MCG external ref. clock [MHz]          : 0
**                  Clock monitor                          : Disabled
**                  FLL settings                           : 
**                    FLL module                           : Enabled
**                    FLL output [MHz]                     : 20.97152
**                    MCGFFCLK clock [kHz]                 : 32.768
**                    Reference clock source               : Slow internal clock
**                    FLL reference clock [kHz]            : 32.768
**                    Multiplication factor                : Auto select
**                  PLL 0 settings                         : 
**                    PLL module                           : Disabled
**                    PLL module in Stop                   : Disabled
**                    PLL output [MHz]                     : 0
**                    Reference clock divider              : Auto select
**                    PLL reference clock [MHz]            : 1
**                    Multiplication factor                : Auto select
**                    Loss of lock interrupt               : Disabled
**            Clock configurations                         : 1
**              Clock configuration 0                      : 
**                __IRC_32kHz                              : 0.032768
**                __IRC_4MHz                               : 2
**                __SYSTEM_OSC                             : 8
**                __RTC_OSC                                : 0
**                Very low power mode                      : Disabled
**                Clock source setting                     : configuration 0
**                  MCG mode                               : FEI
**                  MCG output [MHz]                       : 20.97152
**                  MCGIRCLK clock [MHz]                   : 0.032768
**                  OSCERCLK clock [MHz]                   : 0
**                  ERCLK32K. clock [kHz]                  : 0.001
**                  MCGFFCLK [kHz]                         : 32.768
**                System clocks                            : 
**                  Core clock prescaler                   : Auto select
**                  Core clock                             : 20.97152
**                  Bus clock prescaler                    : Auto select
**                  Bus clock                              : 20.97152
**                  External clock prescaler               : Auto select
**                  External bus clock                     : 10.48576
**                  Flash clock prescaler                  : Auto select
**                  Flash clock                            : 10.48576
**                  PLL/FLL clock selection                : Auto select
**                    Clock frequency [MHz]                : 20.97152
**          Low power mode settings                        : 
**            Allowed power modes                          : 
**              High speed run mode                        : Not allowed
**              Very low power modes                       : Not allowed
**              Low leakage stop mode                      : Not allowed
**              Very low leakage stop mode                 : Not allowed
**            Operation mode settings                      : 
**              WAIT operation mode                        : 
**                Return to wait after ISR                 : no
**              SLEEP operation mode                       : 
**                Low Power mode                           : STOP
**                Return to stop after ISR                 : no
**              STOP operation mode                        : Disabled
**          External memory settings                       : Disabled
**          Common settings                                : 
**            Initialization priority                      : minimal priority
**            Watchdog disable                             : yes
**            Utilize after reset values                   : default
**            NMI pin                                      : Enabled
**              NMI Pin                                    : PTA4/LLWU_P3/FTM0_CH1/NMI_b/EZP_CS_b
**            Reset pin                                    : Enabled
**              Reset Pin                                  : RESET_b
**            Debug interface (JTAG)                       : 
**              JTAG Mode                                  : JTAG
**                TDI                                      : Enabled
**                  TDI Pin                                : PTA1/UART0_RX/FTM0_CH6/JTAG_TDI/EZP_DI
**                TDO                                      : Enabled
**                  TDO Pin                                : PTA2/UART0_TX/FTM0_CH7/JTAG_TDO/TRACE_SWO/EZP_DO
**                TCK                                      : Enabled
**                  TCK Pin                                : PTA0/UART0_CTS_b/FTM0_CH5/JTAG_TCLK/SWD_CLK/EZP_CLK
**                TMS                                      : Enabled
**                  TMS Pin                                : PTA3/UART0_RTS_b/FTM0_CH0/JTAG_TMS/SWD_DIO
**                nTRST                                    : Disabled
**            Flash memory organization                    : 
**              Flash blocks                               : 2
**                Flash block 0                            : PFlash
**                  Address                                : 0x0
**                  Size                                   : 262144
**                  Write unit size                        : 4
**                  Erase unit size                        : 2048
**                  Protection unit size                   : 16384
**                Flash block 1                            : PFlash
**                  Address                                : 0x40000
**                  Size                                   : 262144
**                  Write unit size                        : 4
**                  Erase unit size                        : 2048
**                  Protection unit size                   : 16384
**            Flash configuration field                    : Enabled
**              Security settings                          : 
**                Flash security                           : Disabled
**                Freescale failure analysis access        : Enabled
**                Mass erase                               : Enabled
**                Backdoor key security                    : Disabled
**                Backdoor key 0                           : 255
**                Backdoor key 1                           : 255
**                Backdoor key 2                           : 255
**                Backdoor key 3                           : 255
**                Backdoor key 4                           : 255
**                Backdoor key 5                           : 255
**                Backdoor key 6                           : 255
**                Backdoor key 7                           : 255
**              Protection regions                         : 
**                P-Flash protection settings              : 
**                  Protection region size                 : 16384
**                  P-Flash protection                     : 0xFFFFFFFF
**                  Protection regions                     : 
**                    Protection region 0                  : Unprotected
**                    Protection region 1                  : Unprotected
**                    Protection region 2                  : Unprotected
**                    Protection region 3                  : Unprotected
**                    Protection region 4                  : Unprotected
**                    Protection region 5                  : Unprotected
**                    Protection region 6                  : Unprotected
**                    Protection region 7                  : Unprotected
**                    Protection region 8                  : Unprotected
**                    Protection region 9                  : Unprotected
**                    Protection region 10                 : Unprotected
**                    Protection region 11                 : Unprotected
**                    Protection region 12                 : Unprotected
**                    Protection region 13                 : Unprotected
**                    Protection region 14                 : Unprotected
**                    Protection region 15                 : Unprotected
**                    Protection region 16                 : Unprotected
**                    Protection region 17                 : Unprotected
**                    Protection region 18                 : Unprotected
**                    Protection region 19                 : Unprotected
**                    Protection region 20                 : Unprotected
**                    Protection region 21                 : Unprotected
**                    Protection region 22                 : Unprotected
**                    Protection region 23                 : Unprotected
**                    Protection region 24                 : Unprotected
**                    Protection region 25                 : Unprotected
**                    Protection region 26                 : Unprotected
**                    Protection region 27                 : Unprotected
**                    Protection region 28                 : Unprotected
**                    Protection region 29                 : Unprotected
**                    Protection region 30                 : Unprotected
**                    Protection region 31                 : Unprotected
**              Peripheral settings                        : 
**                NMI function                             : Enabled
**                FLASH initialization speed               : Fast
**                EzPort operation at boot                 : Enabled
**                Low power boot                           : Disabled
**          CPU interrupts/resets                          : 
**            Non-maskable interrupt                       : Enabled
**              Interrupt                                  : INT_NMI
**            Hard fault                                   : Disabled
**            Supervisor call                              : Disabled
**            Pendable service                             : Disabled
**            MCG Loss of lock                             : Disabled
**     Contents    :
**         No public methods
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
** @file Cpu.h
** @version 01.00
** @brief
**         This file collects Processor Expert components configuration 
**         and interface files.
*/         
/*!
**  @addtogroup Cpu_module Cpu module documentation
**  @{
*/         

#ifndef __Init_Config_H
#define __Init_Config_H
  
/* MODULE Init_Config.h */

/* Processor Expert types and constants */
#include "PE_Types.h"

/* Processor configuration file */
#include "CPU_Config.h"

/* PinSettings component header file */
#include "Pins1.h"
  
  
#endif /* __Init_Config_H */

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
