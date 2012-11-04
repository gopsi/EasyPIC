// ==================================================================
//                            OVERVIEW
// ==================================================================
// This file contains all of the device specific function
// definitions.  Examples of this file for various PIC devices
// can be found in the "examples" folder.  The default version
// of this file has #error statements to help you know which
// functions need to be implemented based on the modules your
// application is using.

// To help with readability of the code, all functions that are
// defined in this file and used by the EasyPICs libraries are
// prefixed with PLATFORM_.
// ==================================================================

// ==================================================================
//                             LICENSE
// ==================================================================

// ==================================================================
//                         INCLUDE SECTION
// ==================================================================
// Include any header files here that your platform-specific functions
// may require
#include <appconfig.h>
#include <pl_base.h>


//===================================================================
// Function:        PLATFORM_Initialize(void)
//
// Description:     This function is used to set the target device to
//                  a known state.  For PIC devices it is a good idea
//                  to turn all unconnected pins to be digital outputs
//                  and drive them to ground to lower power consumption
//                  and prevent floating pins.  Only hardware-specific
//                  operation should be performed here.  Application-
//                  specific initialization and state configuration
//                  should be done in the PLATFORM_AppConfigure call.
//   
// PreCondition:    None
//
// Input:           None
//
// Output:          None
//
// Side Effects:    Depends on platform
// 
//===================================================================
void PLATFORM_Initialize()
{
  // TODO: Remove the error and add your device initialization code
  // here.  For PIC devices it is a good idea to turn all unconnected 
  // pins to be digital outputs and drive them to ground to lower 
  // power consumption and prevent floating pins.  Only 
  // hardware-specific operation should be performed here.  
  // Application-specific initialization and state configuration
  // should be done in the PLATFORM_AppConfigure call.  If you are
  // satisfied wih the default power on state of the device you can
  // simply remove the error below and leave the function empty.

  #error FUNCTION DEFINITION: Define PLATFORM_Initialize in platform.c
}

//===================================================================
// Function:        PLATFORM_CriticalError(void)
//
// Description:     This function is used by various modules when an
//                  unrecoverable error has occurred. It should halt
//                  application execution and in it's simplest form
//                  can just be an infinite while(1).  More useful,
//                  however would be to flash an LED, output to a
//                  screen or log to a file.  I recommend something
//                  simple as the hardware may be in a bad state so
//                  a complicated task like writing to the USB port
//                  may fail.
//   
// PreCondition:    None
//
// Input:           None
//
// Output:          None
//
// Side Effects:    Depends on platform
// 
//===================================================================
void PLATFORM_CriticalError()
{
  // TODO: Remove the error and add code here that will be executed
  // if a critical error is encountered by any of the EasyPIC modules
  // I recommend keeping this function simple as things may be in a
  // bad state.  Something like a flashing LED or screen message.
  // Optionally you can leave this function empty although this is not
  // recommended as the behavior will be undefined when an error
  // occurs.

  #error FUNCTION DEFINITION: Define PLATFORM_CriticalError in platform.c
}