#pragma once
/******************************************************************************/
/* File   : isr.hpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

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
extern void GPT1_IRQHandler                                              (void);
extern void GPT2_IRQHandler                                              (void);
extern void ADC2_IRQHandler                                              (void);
extern void ADC1_IRQHandler                                              (void);
extern void CCU6SR0_IRQHandler                                           (void);
extern void CCU6SR1_IRQHandler                                           (void);
extern void CCU6SR2_IRQHandler                                           (void);
extern void CCU6SR3_IRQHandler                                           (void);
extern void SSC1_IRQHandler                                              (void);
extern void SSC2_IRQHandler                                              (void);
extern void UART1_IRQHandler                                             (void);
extern void UART2_IRQHandler                                             (void);
extern void EXINT0_IRQHandler                                            (void);
extern void EXINT1_IRQHandler                                            (void);
extern void BDRV_IRQHandler                                              (void);
extern void DMA_IRQHandler                                               (void);
extern void NMI_Handler                                                  (void);
extern void HardFault_Handler                                            (void);
extern void MemManage_Handler                                            (void);
extern void BusFault_Handler                                             (void);
extern void UsageFault_Handler                                           (void);
extern void SysTick_Handler                                              (void);

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

