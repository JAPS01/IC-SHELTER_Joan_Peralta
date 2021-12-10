/* ###################################################################
**     Filename    : Events.c
**     Project     : IC_Shellter_Prog
**     Processor   : MKE04Z128VLD4
**     Component   : Events
**     Version     : Driver 01.00
**     Compiler    : Keil ARM C/C++ Compiler
**     Date/Time   : 2021-11-29, 19:26, # CodeGen: 0
**     Abstract    :
**         This is user's event module.
**         Put your event handler code here.
**     Settings    :
**     Contents    :
**         Cpu_OnNMI - void Cpu_OnNMI(void);
**
** ###################################################################*/
/*!
** @file Events.c
** @version 01.00
** @brief
**         This is user's event module.
**         Put your event handler code here.
*/         
/*!
**  @addtogroup Events_module Events module documentation
**  @{
*/         
/* MODULE Events */

#include "Cpu.h"
#include "Events.h"
#include "Init_Config.h"
#include "PDD_Includes.h"

#ifdef __cplusplus
extern "C" {
#endif 


/* User includes (#include below this line is not maintained by Processor Expert) */

/*
** ===================================================================
**     Event       :  Cpu_OnNMI (module Events)
**
**     Component   :  Cpu [MKE04Z128LK4]
*/
/*!
**     @brief
**         This event is called when the Non maskable interrupt had
**         occurred. This event is automatically enabled when the [NMI
**         interrupt] property is set to 'Enabled'.
*/
/* ===================================================================*/
void Cpu_OnNMI(void)
{
  /* Write your code here ... */
}

/*
** ===================================================================
**     Event       :  Cpu_OnReset (module Events)
**
**     Component   :  Cpu [MKE04Z128LD4]
*/
/*!
**     @brief
**         This software event is called after a reset.
**     @param
**         Reason          - Content of the reset status register.
**                           You can use predefined constants RSTSRC_*
**                           defined in generated PE_Const.h file to
**                           determine a reason of the last reset. See
**                           definition of these constants in this file
**                           for details.
*/
/* ===================================================================*/
void Cpu_OnReset(uint16_t Reason)
{
  /* Write your code here ... */
}

/* END Events */

#ifdef __cplusplus
}  /* extern "C" */
#endif 

/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.4 [05.09]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
