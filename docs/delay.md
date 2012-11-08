#EasyPIC Delay Module

##Header File
**pl_delay.h**

##Overview
Simple delay routines.  Simply include the header file and you can use any of the functions listed below.  These functions will only work properly if you have correctly setup your CONFIG bits and set the clock variables to match in appconfig.h.

##Define in appconfig.h
```c
#define EASYPIC_DELAY
```

##Functions

###void Delay10us(DWORD dwCount)
Delay for <i>dwCount</i> * 10uS.

###void DelayMs(WORD ms)
Delay for <i>ms</i> milliseconds.

##Examples
```c
// Delay for 1 second
DelayMs(1000);
```
