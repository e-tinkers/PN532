#ifndef __DEBUG_H__
#define __DEBUG_H__

//#define DEBUG

#include "Arduino.h"

#ifdef ARDUINO_SAMD_VARIANT_COMPLIANCE
    #define dSERIAL SerialUSB
#else
    #define dSERIAL Serial
#endif

#ifdef DEBUG
#define DMSG(args...)       dSERIAL.print(args)
#define DMSG_STR(str)       dSERIAL.println(str)
#define DMSG_HEX(num)       dSERIAL.print(' '); dSERIAL.print((num>>4)&0x0F, HEX); dSERIAL.print(num&0x0F, HEX)
#define DMSG_INT(num)       dSERIAL.print(' '); dSERIAL.print(num)
#else
#define DMSG(args...)
#define DMSG_STR(str)
#define DMSG_HEX(num)
#define DMSG_INT(num)
#endif

#endif
