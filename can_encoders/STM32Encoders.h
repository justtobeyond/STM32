
/* File generated by gen_cfile.py. Should not be modified. */

#ifndef STM32ENCODERS_H
#define STM32ENCODERS_H

#include "data.h"

/* Prototypes of function provided by object dictionnary */
UNS32 STM32Encoders_valueRangeTest (UNS8 typeValue, void * value);
const indextable * STM32Encoders_scanIndexOD (UNS16 wIndex, UNS32 * errorCode, ODCallback_t **callbacks);

/* Master node data struct */
extern CO_Data STM32Encoders_Data;
extern UNS16 Operating_Parameters;		/* Mapped at index 0x6000, subindex 0x00*/
extern UNS32 Position_Value;		/* Mapped at index 0x6004, subindex 0x00*/
extern INTEGER32 Position_Value_for_Multi_Sensor_Device[2];		/* Mapped at index 0x6020, subindex 0x01 - 0x02 */
extern UNS16 Operating_Status;		/* Mapped at index 0x6500, subindex 0x00*/
extern UNS32 Single_Turn_Resolution;		/* Mapped at index 0x6501, subindex 0x00*/
extern UNS16 Number_of_Distinguishable_Revolutions;		/* Mapped at index 0x6502, subindex 0x00*/
extern UNS40 Number_of_High_Precision_Revolutions;		/* Mapped at index 0x6510, subindex 0x00*/

#endif // STM32ENCODERS_H