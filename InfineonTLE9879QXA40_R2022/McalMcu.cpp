/******************************************************************************/
/* File   : McalMcu.cpp                                                       */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "McalMcu.hpp"
#include "infMcalMcu_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define MCALMCU_AR_RELEASE_VERSION_MAJOR                                       4
#define MCALMCU_AR_RELEASE_VERSION_MINOR                                       3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(MCALMCU_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible MCALMCU_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(MCALMCU_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible MCALMCU_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_McalMcu, MCALMCU_VAR) McalMcu;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
extern void PMU_Init(void); //TBD: use interface headers as per architecture

FUNC(void, MCALMCU_CODE) module_McalMcu::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, MCALMCU_CONST,       MCALMCU_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   MCALMCU_CONFIG_DATA, MCALMCU_APPL_CONST) lptrCfgModule
){
#if(STD_ON == McalMcu_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrConstModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrConst = (const ConstMcalMcu_Type*)lptrConstModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == McalMcu_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
      PMU_Init();
#if(STD_ON == McalMcu_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == McalMcu_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  MCALMCU_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, MCALMCU_CODE) module_McalMcu::DeInitFunction(
   void
){
#if(STD_ON == McalMcu_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == McalMcu_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == McalMcu_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  MCALMCU_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, MCALMCU_CODE) module_McalMcu::MainFunction(
   void
){
#if(STD_ON == McalMcu_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == McalMcu_InitCheck)
   }
   else{
#if(STD_ON == McalMcu_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  MCALMCU_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, MCALMCU_CODE) module_McalMcu::GetResetReason(
   void
){
}

FUNC(void, MCALMCU_CODE) module_McalMcu::InitRamSection(
   void
){
}

FUNC(void, MCALMCU_CODE) module_McalMcu::InitClock(
   void
){
}

FUNC(void, MCALMCU_CODE) module_McalMcu::DistributePllClock(
   void
){
}

FUNC(void, MCALMCU_CODE) module_McalMcu::GetPllStatus(
   void
){
}

FUNC(void, MCALMCU_CODE) module_McalMcu::GetResetRawValue(
   void
){
}

FUNC(void, MCALMCU_CODE) module_McalMcu::PerformReset(
   void
){
}

FUNC(void, MCALMCU_CODE) module_McalMcu::SetMode(
   void
){
}

FUNC(void, MCALMCU_CODE) module_McalMcu::GetRamState(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

