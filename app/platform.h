#ifndef EASYPIC_PLATFORM_H
#define EASYPIC_PLATFORM_H

// The functions in this header file are used in the various modules available
// in the EasyPICs download.  Their implementation may vary between target devices.
// Implementation of these functions may be found in platform.c


void PLATFORM_Initialize(void);
void PLATFORM_CriticalError(void);

#endif