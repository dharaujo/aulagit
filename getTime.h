#ifndef getTime_h
#define getTime_h

#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif

#define GT_LIB_VERSION "0.1.0"
#define POTENCIA 1000

float seconds();

#endif