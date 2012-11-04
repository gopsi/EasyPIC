#ifndef EasyPIC_APPCONFIG_H
#define EasyPIC_APPCONFIG_H

// ==================================================================
//                            OVERVIEW
// ==================================================================
// This header file is a combination of hardware configuration and 
// application configuration.  It contains what the Microchip libaries
// normally refer to as HardwareProfile.h but also includes other
// configuration settings for various modules that may be used in the
// application
// ==================================================================

// ==================================================================
//                            MODULES
// ==================================================================
// Because all of the module source code is included in the projects
// to make setup easier, we use #defines to actually include or 
// exclude the code from the build process.  Uncomment the items 
// below that you wish to use in your project.

//


// ==================================================================
//                        CONFIGURATION BITS
// ==================================================================
// The APPLICATION_ENTRY_POINT define should only exist in app.c.
// This prevents the config bits from being set by other files that
// include this header.  This prevents the compiler from throwing an 
// error.  The config settings listed below are generic defaults.
// Modify them to configure your device as required by your app.

#error CONFIGURE INCLUDE DIRECTORIES: Before things will build correctly you need to configure the include directories.  Go to the location of this error for more information
// For things to work correctly you will need to make sure the 
// following directories are included in the search path of
// the compiler you are using:
// 
//    - The "modules" folder
//    - The "app" folder
//    - The "modules/_inc" folder
//
// Once you have done that you can remove this error and comment.
// To add folders to the search path in MPLABX:
//      1) Right-click on your project in the IDE and select Properties
//      2) Select the compiler in your toolchain to show it's properties
//      3) One of it's options will be "Include Directories".  Add the above folders.


#error CONFIGURATION BITS: Define the config bits for your application
// TODO: Remove the error and find your device in the list
// below.  Then verify the config bits are set appropriately. For
// more information on the configuration bits see the datasheet for
// your device.  If your device is not listed below you will need
// to add an additional #elif below.

#if defined(APPLICATION_ENTRY_POINT)
    #ifdef __18F27J53
        #pragma config WDTEN	= OFF          // Watchdog disabled
        #pragma config PLLDIV	= 2		       // 8 MHz crystal
        #pragma config CFGPLLEN = ON		   // PLL Enabled
        #pragma config STVREN	= ON		   // Stack over/underflow reset enabled
        #pragma config XINST	= OFF		   // Extended instruction set off
        #pragma config CPUDIV	= OSC3_PLL3	   // CPU system clock divide by 3
        #pragma config CP0	    = OFF	       // Disable code protect
        #pragma config OSC	    = INTOSCPLL	   // Use internal oscillator
        #pragma config SOSCSEL 	= DIG
        #pragma config CLKOEC	= OFF		// CLKO output disabled on RA6
        #pragma config FCMEN	= OFF		// Fail-Safe clock monitor off
        #pragma config IESO	    = OFF	    // Internal/External osc switch over mode
        #pragma config WDTPS 	= 32768		// WD post scalar
        #pragma config DSWDTOSC	= INTOSCREF	// DSWDT uses INTRC
        #pragma config RTCOSC	= INTOSCREF	// RTCC clock select
        #pragma config DSBOREN	= OFF		// Deep Sleep BOR
        #pragma config DSWDTEN	= OFF		// Deep Sleep WDT
        #pragma config DSWDTPS	= K32		// Deep Sleep WDT Postscalar
        #pragma config IOL1WAY	= OFF		// IOCLOCK one-way enable
        #pragma config ADCSEL	= BIT10		// ADC 10 bit
        #pragma config MSSP7B_EN    = MSK5		// MSSP address masking
        #pragma config WPCFG	= OFF		// Config words page write protect
        #pragma config WPDIS	= OFF		// WPCFG bits ignored
        #pragma config LS48MHZ	= SYS48X8
    #elif defined(__PIC32MX__)
        // The oscillator settings here create an 80MHz system clock
        #pragma config FVBUSONIO        = ON
        #pragma config FUSBIDIO         = ON
        #pragma config FCANIO           = ON
        #pragma config FETHIO           = ON
        #pragma config FMIIEN           = ON
        #pragma config FSRSSEL          = PRIORITY_7
        #pragma config FPLLODIV         = DIV_1
        #pragma config UPLLEN           = ON
        #pragma config UPLLIDIV         = DIV_2
        #pragma config FPLLMUL          = MUL_20
        #pragma config FPLLIDIV         = DIV_2
        #pragma config FWDTEN           = OFF
        #pragma config WDTPS            = PS1
        #pragma config FCKSM            = CSDCMD
        #pragma config FPBDIV           = DIV_1
        #pragma config OSCIOFNC         = OFF
        #pragma config POSCMOD          = HS
        #pragma config IESO             = OFF
        #pragma config FSOSCEN          = ON
        #pragma config FNOSC            = PRIPLL //PRI//FRC
        #pragma config CP               = OFF
        #pragma config BWP              = OFF
        #pragma config PWP              = OFF
        #pragma config ICESEL           = ICS_PGx1
        #pragma config DEBUG            = OFF
    #else

        #error Unsupported Device.  You need to add your device to the Bit Configuration section of appconfig.h.
        // TODO: Add additional sections for other devices.  Help 
        // support this project by creating a pull request on
        // Github or by sending me the changes to be included
        // in future releases.  sidwarkd@hardlysoftware.com

    #endif
    
#endif

// ==================================================================
//                       OSCILLATOR SETTINGS
// ==================================================================
// The following defines are used throughout the EasyPIC libraries and
// need to be properly configured.  The values will depend on how
// you set up the configuration bits above.


#error CLOCK SETTINGS: Define clock speeds based on how you previously set the configuration bits
// TODO: Remove the error, uncomment the defines below and set them to 
// the appropriate values for your application.

//#define CLOCK_FREQ              80000000L
//#define GetSystemClock()        (80000000ul)
//#define GetPeripheralClock()    (GetSystemClock()/4) 
//#define GetInstructionClock()   (GetSystemClock())

// ==================================================================
//                        I/O PIN SETTINGS
// ==================================================================
// In this section you should define any generic I/O pins that will 
// be used for things like LEDs and switches.  I/O  pins for built
// in PIC functionality like USART, SPI, I2C, etc will be configured
// in the modules which use them.


#endif

