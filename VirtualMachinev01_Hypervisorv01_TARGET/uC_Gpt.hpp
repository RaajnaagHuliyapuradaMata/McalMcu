#pragma once
/******************************************************************************/
/* File   : uC_Gpt.h                                                          */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "uC.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define OSTM0CMP OSTM0.CMP
#define OSTM0TT  OSTM0.TT
#define OSTM0EMU OSTM0.EMU
#define OSTM0CTL OSTM0.CTL
#define OSTM0TS  OSTM0.TS

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
#if(CfgProject_dSwitchReSim != STD_ON)
__IOREG(PROTCMD0,         0xFFF80000, __READ_WRITE, uint32);
__IOREG(PROTS0,           0xFFF80004, __READ,       uint32);
__IOREG(MOSCE,            0xFFF81100, __READ_WRITE, uint32);
__IOREG(MOSCS,            0xFFF81104, __READ,       uint32);
__IOREG(MOSCC,            0xFFF81108, __READ_WRITE, uint32);
__IOREG(MOSCST,           0xFFF8110C, __READ_WRITE, uint32);
__IOREG(PROTCMD1,         0xFFF88000, __READ_WRITE, uint32);
__IOREG(PROTS1,           0xFFF88004, __READ,       uint32);
__IOREG(PLLE,             0xFFF89000, __READ_WRITE, uint32);
__IOREG(PLLS,             0xFFF89004, __READ,       uint32);
__IOREG(PLLC,             0xFFF89008, __READ_WRITE, uint32);
__IOREG(CKSC_CPUCLKS_CTL, 0xFFF8A000, __READ_WRITE, uint32);
__IOREG(CKSC_CPUCLKS_ACT, 0xFFF8A008, __READ,       uint32);
__IOREG(CKSC_CPUCLKD_CTL, 0xFFF8A100, __READ_WRITE, uint32);
__IOREG(CKSC_CPUCLKD_ACT, 0xFFF8A108, __READ,       uint32);
__IOREG(OSTM0,            0xFFEC0000, __READ_WRITE, __type43);
#else
extern volatile       uint32   PROTCMD0;
extern volatile const uint32   PROTS0;
extern volatile       uint32   MOSCE;
extern volatile const uint32   MOSCS;
extern volatile       uint32   MOSCC;
extern volatile       uint32   MOSCST;
extern volatile       uint32   PROTCMD1;
extern volatile const uint32   PROTS1;
extern volatile       uint32   PLLE;
extern volatile const uint32   PLLS;
extern volatile       uint32   PLLC;
extern volatile       uint32   CKSC_CPUCLKS_CTL;
extern volatile const uint32   CKSC_CPUCLKS_ACT;
extern volatile       uint32   CKSC_CPUCLKD_CTL;
extern volatile const uint32   CKSC_CPUCLKD_ACT;
extern volatile       __type43 OSTM0;
#endif

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
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

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
