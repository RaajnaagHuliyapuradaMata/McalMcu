#pragma once
/******************************************************************************/
/* File   : Template.hpp                                                      */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "tle_variants.hpp"
#include "sfr_access.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define NMI_WDT                                                ((uint8)1u << 0u)
#define NMI_PLL                                                ((uint8)1u << 1u)
#define NMI_NVM                                                ((uint8)1u << 2u)
#define NMI_OT                                                 ((uint8)1u << 3u)
#define NMI_OWT                                                ((uint8)1u << 4u)
#define NMI_MAP                                                ((uint8)1u << 5u)
#define NMI_ECC                                                ((uint8)1u << 6u)
#define NMI_SUP                                                ((uint8)1u << 7u)
#define SCU_EXICON0_EXINT0_RE_Pos                                          (0UL)
#define SCU_EXICON0_EXINT0_RE_Msk                                       (0x01UL)
#define SCU_EXICON0_EXINT0_FE_Pos                                          (1UL)
#define SCU_EXICON0_EXINT0_FE_Msk                                       (0x02UL)
#define SCU_EXICON0_EXINT1_RE_Pos                                          (2UL)
#define SCU_EXICON0_EXINT1_RE_Msk                                       (0x04UL)
#define SCU_EXICON0_EXINT1_FE_Pos                                          (3UL)
#define SCU_EXICON0_EXINT1_FE_Msk                                       (0x08UL)
#define SCU_EXICON0_EXINT2_RE_Pos                                          (4UL)
#define SCU_EXICON0_EXINT2_RE_Msk                                       (0x10UL)
#define SCU_EXICON0_EXINT2_FE_Pos                                          (5UL)
#define SCU_EXICON0_EXINT2_FE_Msk                                       (0x20UL)
#define SCU_NMISR_Pos                                                      (0UL)
#define SCU_NMISR_Msk                                                   (0xFFUL)
#define SCU_NMICLR_Pos                                                     (0UL)
#define SCU_NMICLR_Msk                                                  (0xFFUL)

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

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

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
extern void  INT_Init                                                    (void);
extern void  Global_Int_En                                               (void);
extern void  Global_Int_Dis                                              (void);
extern void  ECC_RAM_DoubleBit_Int_En                                    (void);
extern void  ECC_RAM_DoubleBit_Int_Dis                                   (void);
extern void  ECC_NVM_DoubleBit_Int_En                                    (void);
extern void  ECC_NVM_DoubleBit_Int_Dis                                   (void);
extern void  ECC_RAM_SingleBit_Int_Clr                                   (void);
extern void  ECC_RAM_DoubleBit_Int_Clr                                   (void);
extern void  ECC_NVM_DoubleBit_Int_Clr                                   (void);
extern void  EXINT0_Rising_Edge_Int_En                                   (void);
extern void  EXINT0_Rising_Edge_Int_Dis                                  (void);
extern void  EXINT0_Falling_Edge_Int_En                                  (void);
extern void  EXINT0_Falling_Edge_Int_Dis                                 (void);
extern void  EXINT1_Rising_Edge_Int_En                                   (void);
extern void  EXINT1_Rising_Edge_Int_Dis                                  (void);
extern void  EXINT1_Falling_Edge_Int_En                                  (void);
extern void  EXINT1_Falling_Edge_Int_Dis                                 (void);
extern void  EXINT2_Rising_Edge_Int_En                                   (void);
extern void  EXINT2_Rising_Edge_Int_Dis                                  (void);
extern void  EXINT2_Falling_Edge_Int_En                                  (void);
extern void  EXINT2_Falling_Edge_Int_Dis                                 (void);
extern void  EXINT0_Rising_Edge_Int_Clr                                  (void);
extern void  EXINT0_Falling_Edge_Int_Clr                                 (void);
extern void  EXINT1_Rising_Edge_Int_Clr                                  (void);
extern void  EXINT1_Falling_Edge_Int_Clr                                 (void);
extern void  EXINT2_Rising_Edge_Int_Clr                                  (void);
extern void  EXINT2_Falling_Edge_Int_Clr                                 (void);
extern void  NMI_WDT_Int_En                                              (void);
extern void  NMI_WDT_Int_Dis                                             (void);
extern void  NMI_PLL_Int_En                                              (void);
extern void  NMI_PLL_Int_Dis                                             (void);
extern void  NMI_NVM_Int_En                                              (void);
extern void  NMI_NVM_Int_Dis                                             (void);
extern void  NMI_ECC_Int_En                                              (void);
extern void  NMI_ECC_Int_Dis                                             (void);
extern void  NMI_MAP_Int_En                                              (void);
extern void  NMI_MAP_Int_Dis                                             (void);
extern void  NMI_SUP_Int_En                                              (void);
extern void  NMI_SUP_Int_Dis                                             (void);
extern void  NMI_OWD_Int_En                                              (void);
extern void  NMI_OWD_Int_Dis                                             (void);
extern void  NMI_OT_Int_En                                               (void);
extern void  NMI_OT_Int_Dis                                              (void);
extern void  NMI_WDT_Int_Clr                                             (void);
extern void  NMI_PLL_Int_Clr                                             (void);
extern void  NMI_NVM_Int_Clr                                             (void);
extern void  NMI_OT_Int_Clr                                              (void);
extern void  NMI_OWD_Int_Clr                                             (void);
extern void  NMI_MAP_Int_Clr                                             (void);
extern void  NMI_ECC_Int_Clr                                             (void);
extern void  NMI_SUP_Int_Clr                                             (void);
extern void  NVIC_Node0_En                                               (void);
extern void  NVIC_Node0_Dis                                              (void);
extern void  NVIC_Node1_En                                               (void);
extern void  NVIC_Node1_Dis                                              (void);
extern void  NVIC_Node2_En                                               (void);
extern void  NVIC_Node2_Dis                                              (void);
extern void  NVIC_Node3_En                                               (void);
extern void  NVIC_Node3_Dis                                              (void);
extern void  NVIC_Node4_En                                               (void);
extern void  NVIC_Node4_Dis                                              (void);
extern void  NVIC_Node5_En                                               (void);
extern void  NVIC_Node5_Dis                                              (void);
extern void  NVIC_Node6_En                                               (void);
extern void  NVIC_Node6_Dis                                              (void);
extern void  NVIC_Node7_En                                               (void);
extern void  NVIC_Node7_Dis                                              (void);
extern void  NVIC_Node8_En                                               (void);
extern void  NVIC_Node8_Dis                                              (void);
extern void  NVIC_Node9_En                                               (void);
extern void  NVIC_Node9_Dis                                              (void);
extern void  NVIC_Node10_En                                              (void);
extern void  NVIC_Node10_Dis                                             (void);
extern void  NVIC_Node11_En                                              (void);
extern void  NVIC_Node11_Dis                                             (void);
extern void  NVIC_Node12_En                                              (void);
extern void  NVIC_Node12_Dis                                             (void);
extern void  NVIC_Node13_En                                              (void);
extern void  NVIC_Node13_Dis                                             (void);
extern void  NVIC_Node14_En                                              (void);
extern void  NVIC_Node14_Dis                                             (void);
extern void  NVIC_Node15_En                                              (void);
extern void  NVIC_Node15_Dis                                             (void);
extern void  BEMF_Phase_U_Hi_Int_En                                      (void);
extern void  BEMF_Phase_U_Hi_Int_Dis                                     (void);
extern void  BEMF_Phase_U_Lo_Int_En                                      (void);
extern void  BEMF_Phase_U_Lo_Int_Dis                                     (void);
extern void  BEMF_Phase_V_Hi_Int_En                                      (void);
extern void  BEMF_Phase_V_Hi_Int_Dis                                     (void);
extern void  BEMF_Phase_V_Lo_Int_En                                      (void);
extern void  BEMF_Phase_V_Lo_Int_Dis                                     (void);
extern void  BEMF_Phase_W_Hi_Int_En                                      (void);
extern void  BEMF_Phase_W_Hi_Int_Dis                                     (void);
extern void  BEMF_Phase_W_Lo_Int_En                                      (void);
extern void  BEMF_Phase_W_Lo_Int_Dis                                     (void);
extern void  BEMF_Phase_U_Hi_Int_Clr                                     (void);
extern void  BEMF_Phase_U_Lo_Int_Clr                                     (void);
extern void  BEMF_Phase_V_Hi_Int_Clr                                     (void);
extern void  BEMF_Phase_V_Lo_Int_Clr                                     (void);
extern void  BEMF_Phase_W_Hi_Int_Clr                                     (void);
extern void  BEMF_Phase_W_Lo_Int_Clr                                     (void);
extern uint8 INT_Get_NMI_Status                                          (void);
extern void  INT_Clr_NMI_Status                                   (uint8 Flags);
extern void  INT_Enable_Global_Int                                       (void);
extern void  INT_Disable_Global_Int                                      (void);

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

