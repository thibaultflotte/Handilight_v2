/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : LEDRouge.h
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
** @file LEDRouge.h
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

#ifndef __LEDRouge_H
#define __LEDRouge_H

/* MODULE LEDRouge. */

/* Include shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
/* Include inherited beans */
#include "PpgLdd1.h"

#include "Cpu.h"


#define LEDRouge_PERIOD_VALUE PpgLdd1_PERIOD_TICKS /* Initial period value in ticks of the timer. It is available only if the bean is enabled in high speed mode. */
#define LEDRouge_PERIOD_VALUE_HIGH PpgLdd1_PERIOD_TICKS_0 /* Period value in ticks of the timer in high speed mode. It is available only if the bean is enabled in high speed mode. */
#ifdef PpgLdd1_SPUS_MIN
#define LEDRouge_SPUS_MIN  PpgLdd1_SPUS_MIN /* Lower bound of interval for parameter of method SetPeriodUS */
#endif
#ifdef PpgLdd1_SPUS_MAX
#define LEDRouge_SPUS_MAX  PpgLdd1_SPUS_MAX /* Upper bound of interval for parameter of method SetPeriodUS */
#endif
#ifdef PpgLdd1_SPMS_MIN
#define LEDRouge_SPMS_MIN  PpgLdd1_SPMS_MIN /* Lower bound of interval for parameter of method SetPeriodMS. */
#endif
#ifdef PpgLdd1_SPMS_MAX
#define LEDRouge_SPMS_MAX  PpgLdd1_SPMS_MAX /* Upper bound of interval for parameter of method SetPeriodMS. */
#endif
#ifdef PpgLdd1_SPSEC_MIN
#define LEDRouge_SPSEC_MIN PpgLdd1_SPSEC_MIN /* Lower bound of interval for parameter of method SetPeriodSec. */
#endif
#ifdef PpgLdd1_SPSEC_MAX
#define LEDRouge_SPSEC_MAX PpgLdd1_SPSEC_MAX /* Upper bound of interval for parameter of method SetPeriodSec. */
#endif
#ifdef PpgLdd1_SPREAL_MIN
#define LEDRouge_SPREAL_MIN PpgLdd1_SPREAL_MIN /* Lower bound of interval for parameter of method SetPeriodReal. */
#endif
#ifdef PpgLdd1_SPREAL_MAX
#define LEDRouge_SPREAL_MAX PpgLdd1_SPREAL_MAX /* Upper bound of interval for parameter of method SetPeriodReal. */
#endif
#ifdef PpgLdd1_SFREQ_HZ_MIN
#define LEDRouge_SFREQ_HZ_MIN PpgLdd1_SFREQ_HZ_MIN /* Lower bound of interval for parameter of method SetFreqHz. */
#endif
#ifdef PpgLdd1_SFREQ_HZ_MAX
#define LEDRouge_SFREQ_HZ_MAX PpgLdd1_SFREQ_HZ_MAX /* Upper bound of interval for parameter of method SetFreqHz. */
#endif
#ifdef PpgLdd1_SFREQ_KHZ_MIN
#define LEDRouge_SFREQ_KHZ_MIN PpgLdd1_SFREQ_KHZ_MIN /* Lower bound of interval for parameter of method SetFreqkHz. */
#endif
#ifdef PpgLdd1_SFREQ_KHZ_MAX
#define LEDRouge_SFREQ_KHZ_MAX PpgLdd1_SFREQ_KHZ_MAX /* Upper bound of interval for parameter of method SetFreqkHz. */
#endif
#ifdef PpgLdd1_SFREQ_MHZ_MIN
#define LEDRouge_SFREQ_MHZ_MIN PpgLdd1_SFREQ_MHZ_MIN /* Lower bound of interval for parameter of method SetFreqMHz. */
#endif
#ifdef PpgLdd1_SFREQ_MHZ_MAX
#define LEDRouge_SFREQ_MHZ_MAX PpgLdd1_SFREQ_MHZ_MAX /* Upper bound of interval for parameter of method SetFreqMHz. */
#endif



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
#define LEDRouge_Enable() (PpgLdd1_Enable(PpgLdd1_DeviceData))

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
#define LEDRouge_Disable() (PpgLdd1_Disable(PpgLdd1_DeviceData))

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
byte LEDRouge_SetPeriodUS(word Time);

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
byte LEDRouge_SetPeriodMS(word Time);

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
byte LEDRouge_SetPeriodSec(word Time);

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
byte LEDRouge_SetPeriodReal(TPE_Float Time);

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
byte LEDRouge_SetFreqHz(word Freq);

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
byte LEDRouge_SetFreqkHz(word Freq);

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
byte LEDRouge_SetFreqMHz(word Freq);

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
#define LEDRouge_SetRatio8(Ratio) (PpgLdd1_SetRatio8(PpgLdd1_DeviceData, Ratio))

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
void PpgLdd1_OnEnd(LDD_TUserData *UserDataPtr);

/* END LEDRouge. */

#endif 
/* ifndef __LEDRouge_H */
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
