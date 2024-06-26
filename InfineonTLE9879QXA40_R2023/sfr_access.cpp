/******************************************************************************/
/* File   : sfr_access.cpp                                                    */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "types.hpp"
#include "sfr_access.hpp"

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
void Field_Wrt8all(uint8 *reg, uint8 val){
   (*reg = val);
}

void Field_Wrt8(uint8 *reg, uint8 pos, uint8 msk, uint8 val){
   (*reg = (uint8)((uint32)val << pos) & (uint8)msk);
}

void Field_Wrt16(uint16 *reg, uint16 pos, uint16 msk, uint16 val){
   (*reg = (uint16)((uint32)val << pos) & (uint16)msk);
}

void Field_Wrt32(uint32 *reg, uint32 pos, uint32 msk, uint32 val){
   (*reg = ((uint32)val << pos) & (uint32)msk);
}

void Field_Mod8(uint8 *reg, uint8 pos, uint8 msk, uint8 val){
   (*reg = (*reg & (uint8)~msk)  | (uint8)(((uint32)val << pos)  & (uint8)msk));
}

void Field_Mod16(uint16 *reg, uint16 pos, uint16 msk, uint16 val){
   (*reg = (*reg & (uint16)~msk) | (uint16)(((uint32)val << pos) & (uint16)msk));
}

void Field_Mod32(uint32 *reg, uint32 pos, uint32 msk, uint32 val){
   (*reg = (*reg & (uint32)~msk) | (uint32)(((uint32)val << pos) & (uint32)msk));
}

void Field_Inv8(uint8 *reg, uint8 msk){
   (*reg = ((uint8) * reg ^ (uint8)msk));
}

void Field_Inv16(uint16 *reg, uint16 msk){
   (*reg = ((uint16) * reg ^ (uint16)msk));
}

void Field_Inv32(uint32 *reg, uint32 msk){
   (*reg = ((uint32) * reg ^ (uint32)msk));
}

void Field_Clr8(uint8 *reg, uint8 msk){
   (*reg = (*reg & (uint8)~msk));
}

void Field_Clr16(uint16 *reg, uint16 msk){
   (*reg = (*reg & (uint16)~msk));
}

void Field_Clr32(uint32 *reg, uint32 msk){
   (*reg = (*reg & (uint32)~msk));
}

uint8 u1_Field_Rd8(const uint8 *reg, uint8 pos, uint8 msk){
   return(((*reg & msk) >> pos) & 1u);
}

uint8 u1_Field_Rd16(const uint16 *reg, uint16 pos, uint16 msk){
   return((uint8)((*reg & msk) >> pos) & 1u);
}

uint8 u1_Field_Rd32(const uint32 *reg, uint32 pos, uint32 msk){
   return((uint8)((*reg & msk) >> pos) & 1u);
}

uint8 u8_Field_Rd8(const uint8 *reg, uint8 pos, uint8 msk){
   return((*reg & msk) >> pos);
}

uint8 u8_Field_Rd16(const uint16 *reg, uint16 pos, uint16 msk){
   return((uint8)((*reg & msk) >> pos));
}

uint8 u8_Field_Rd32(const uint32 *reg, uint32 pos, uint32 msk){
   return((uint8)((*reg & msk) >> pos));
}

uint16 u16_Field_Rd16(const uint16 *reg, uint16 pos, uint16 msk){
   return((*reg & msk) >> pos);
}

uint16 u16_Field_Rd32(const uint32 *reg, uint32 pos, uint32 msk){
   return((uint16)((*reg & msk) >> pos));
}

uint32 u32_Field_Rd32(const uint32 *reg, uint32 pos, uint32 msk){
   return((uint32)((*reg & msk) >> pos));
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

