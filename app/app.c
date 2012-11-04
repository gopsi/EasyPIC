#define APPLICATION_ENTRY_POINT

#include "app.h"


// ==================================================================
//                       INTERRUPT HANDLING
// ==================================================================
// 
// Interrupt Handling varies between the differnt Microchip compilers.
// The following set of defines configures interrupts to work across
// the different compilers.


// ================================
// PIC18 Interrupt Service Routines
// ================================
// NOTE: Several PICs, including the PIC18F4620 revision A3 have a RETFIE FAST/MOVFF bug
// The interruptlow keyword is used to work around the bug when using C18
#if defined(__18CXX)
  #if defined(HI_TECH_C)
  void interrupt low_priority LowISR(void)
  #else
  #pragma interruptlow LowISR
  void LowISR(void)
  #endif
  {
    
    #error INTERRUPT HANDLING: Add low priority interrupt handling
    // TODO:  Remove the error and add your low priority interrupt code here
    // If you don't need low priority interrupt handling this function can be left blank
  }
  
  #if defined(HI_TECH_C)
  void interrupt HighISR(void)
  #else
  #pragma interruptlow HighISR
  void HighISR(void)
  #endif
  {
    
    #error INTERRUPT HANDLING: Add high priority interrupt handling
    // TODO:  Remove the error and add your high priority interrupt code here
    // If you don't need high priority interrupt handling this function can be left blank
  }

  #if !defined(HI_TECH_C)
  #pragma code lowVector=0x18
  void LowVector(void){_asm goto LowISR _endasm}
  #pragma code highVector=0x8
  void HighVector(void){_asm goto HighISR _endasm}
  #pragma code // Return to default code section
  #endif

// ==============================
// C30 and C32 Exception Handlers
// ==============================
// If your code gets here, you either tried to read or write
// a NULL pointer, or your application overflowed the stack
// by having too many local variables or parameters declared.
#elif defined(__C30__)
  void _ISR __attribute__((__no_auto_psv__)) _AddressError(void)
  {
      Nop();
    Nop();
  }
  void _ISR __attribute__((__no_auto_psv__)) _StackError(void)
  {
      Nop();
    Nop();
  }
  
#elif defined(__C32__)
  void _general_exception_handler(unsigned cause, unsigned status)
  {
    #error EXCEPTION HANDLING: Add exception handling code in app.c.
    // TODO: Comment out the following #error line and add your exception handling code below.
    
    // If you do not wish to have any exception handling code just
    // uncomment the following lines of code
    // Nop();
    // Nop();
  }
#endif

// ==================================================================
//                       MAIN APPLICATION
// ==================================================================

#if defined(__18CXX)
void main(void)
#else
int main(void)
#endif
{
  PLATFORM_Initialize();

  
  // TODO: Start writing your application code here
  // A recommended starting point is to flash an LED to make sure 
  // everything is configured and connected correctly.
}
