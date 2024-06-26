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

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
#ifndef ReSim
__IOREG(PROTCMD0,     0xFFF80000, __READ_WRITE, uint32);
__IOREG(PROTS0,     0xFFF80004, __READ,     uint32);
__IOREG(MOSCE,     0xFFF81100, __READ_WRITE, uint32);
__IOREG(MOSCS,     0xFFF81104, __READ,     uint32);
__IOREG(MOSCC,     0xFFF81108, __READ_WRITE, uint32);
__IOREG(MOSCST,     0xFFF8110C, __READ_WRITE, uint32);
__IOREG(PROTCMD1,     0xFFF88000, __READ_WRITE, uint32);
__IOREG(PROTS1,     0xFFF88004, __READ,     uint32);
__IOREG(PLLE,     0xFFF89000, __READ_WRITE, uint32);
__IOREG(PLLS,     0xFFF89004, __READ,     uint32);
__IOREG(PLLC,     0xFFF89008, __READ_WRITE, uint32);
__IOREG(CKSC_CPUCLKS_CTL, 0xFFF8A000, __READ_WRITE, uint32);
__IOREG(CKSC_CPUCLKS_ACT, 0xFFF8A008, __READ,     uint32);
__IOREG(CKSC_CPUCLKD_CTL, 0xFFF8A100, __READ_WRITE, uint32);
__IOREG(CKSC_CPUCLKD_ACT, 0xFFF8A108, __READ,     uint32);
#else
extern volatile       uint32 PROTCMD0;
extern volatile const uint32 PROTS0;
extern volatile       uint32 MOSCE;
extern volatile const uint32 MOSCS;
extern volatile       uint32 MOSCC;
extern volatile       uint32 MOSCST;
extern volatile       uint32 PROTCMD1;
extern volatile const uint32 PROTS1;
extern volatile       uint32 PLLE;
extern volatile const uint32 PLLS;
extern volatile       uint32 PLLC;
extern volatile       uint32 CKSC_CPUCLKS_CTL;
extern volatile const uint32 CKSC_CPUCLKS_ACT;
extern volatile       uint32 CKSC_CPUCLKD_CTL;
extern volatile const uint32 CKSC_CPUCLKD_ACT;
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
