/******************************************************************************/
/* File   : Mcu.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "module.h"
#include "Mcu_Cfg.h"
#include "infMcu_EcuM.h"
#include "infMcu_Dcm.h"
#include "infMcu_SchM.h"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define MCU_AR_RELEASE_MAJOR_VERSION                                           4
#define MCU_AR_RELEASE_MINOR_VERSION                                           3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(MCU_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION)
   #error "Incompatible MCU_AR_RELEASE_MAJOR_VERSION!"
#endif

#if(MCU_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION)
   #error "Incompatible MCU_AR_RELEASE_MINOR_VERSION!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_Mcu:
      public abstract_module
   ,  public infMcu_EcuM
{
   public:
      FUNC(void, MCU_CODE) InitFunction   (void);
      FUNC(void, MCU_CODE) DeInitFunction (void);
      FUNC(void, MCU_CODE) GetVersionInfo (void);
      FUNC(void, MCU_CODE) MainFunction   (void);
      FUNC(void, MCU_CODE) GetResetReason (void);

   private:
      CONST(Std_TypeVersionInfo, MCU_CONST) VersionInfo = {
            0x0000
         ,  0xFFFF
         ,  0x01
         ,  '0'
         ,  '1'
         ,  '0'
      };
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_Mcu, MCU_VAR) Mcu;
CONSTP2VAR(infEcuMClient, MCU_VAR, MCU_CONST) gptrinfEcuMClient_Mcu = &Mcu;
CONSTP2VAR(infDcmClient,  MCU_VAR, MCU_CONST) gptrinfDcmClient_Mcu  = &Mcu;
CONSTP2VAR(infSchMClient, MCU_VAR, MCU_CONST) gptrinfSchMClient_Mcu = &Mcu;
CONSTP2VAR(infMcu_EcuM,   MCU_VAR, MCU_CONST) gptrinfMcu_EcuM       = &Mcu;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, MCU_CODE) module_Mcu::InitFunction(void){
   Mcu.IsInitDone = E_OK;
}

FUNC(void, MCU_CODE) module_Mcu::DeInitFunction(void){
   Mcu.IsInitDone = E_NOT_OK;
}

FUNC(void, MCU_CODE) module_Mcu::GetVersionInfo(void){
#if(STD_ON == Mcu_DevErrorDetect)
//TBD: API parameter check
   Det_ReportError(
   );
#endif
}

FUNC(void, MCU_CODE) module_Mcu::MainFunction(void){
}

FUNC(void, MCU_CODE) module_Mcu::GetResetReason(void){
}

#include "Mcu_Unused.h"

FUNC(void, MCU_CODE) class_Mcu_Unused::InitRamSection(void){
}

FUNC(void, MCU_CODE) class_Mcu_Unused::InitClock(void){
}

FUNC(void, MCU_CODE) class_Mcu_Unused::DistributePllClock(void){
}

FUNC(void, MCU_CODE) class_Mcu_Unused::GetPllStatus(void){
}

FUNC(void, MCU_CODE) class_Mcu_Unused::GetResetRawValue(void){
}

FUNC(void, MCU_CODE) class_Mcu_Unused::PerformReset(void){
}

FUNC(void, MCU_CODE) class_Mcu_Unused::SetMode(void){
}

FUNC(void, MCU_CODE) class_Mcu_Unused::GetRamState(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

