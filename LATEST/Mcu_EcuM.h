#pragma once
/*****************************************************/
/* File   : Mcu_EcuM.h                               */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "Compiler_Cfg_Mcu.h"

#include "EcuM_Client.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class interface_Mcu_EcuM : public interface_EcuM_Client{
   public:
/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
      virtual FUNC(void, MCU_CODE) InitFunction   (void) = 0;
      virtual FUNC(void, MCU_CODE) DeInitFunction (void) = 0;
      virtual FUNC(void, MCU_CODE) GetResetReason (void) = 0;
};

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
extern interface_Mcu_EcuM *EcuM_Client_ptr_Mcu;

/*****************************************************/
/* EOF                                               */
/*****************************************************/

