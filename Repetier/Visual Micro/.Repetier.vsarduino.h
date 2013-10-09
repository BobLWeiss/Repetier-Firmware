/* 
	Editor: http://www.visualmicro.com
	        arduino debugger, visual micro +, free forum and wiki
	
	Hardware: Arduino Mega 2560 or Mega ADK, Platform=avr, Package=arduino
*/

#define __AVR_ATmega2560__
#define ARDUINO 101
#define ARDUINO_MAIN
#define F_CPU 16000000L
#define __AVR__
#define __cplusplus
extern "C" void __cxa_pure_virtual() {;}

void check_mem();
void send_mem();
void update_extruder_flags();
void update_ramps_parameter();
//
void defaultLoopActions();
//
inline long Div4U2U(unsigned long a,unsigned int b);
long CPUDivU2(unsigned int divisor);
byte get_coordinates(GCode *com);
inline unsigned int ComputeV(long timer,long accel);
inline unsigned long mulu6xu16to32(unsigned int a,unsigned int b);
inline unsigned int mulu6xu16shift16(unsigned int a,unsigned int b);
inline long bresenham_step();
inline long bresenham_step();
void kill(byte only_steppers);
inline void setTimer(unsigned long delay);

#include "C:\Program Files (x86)\Arduino\hardware\arduino\variants\mega\pins_arduino.h" 
#include "C:\Program Files (x86)\Arduino\hardware\arduino\cores\arduino\arduino.h"
#include "E:\Dropbox\GitHub\Repetier-Firmware\Repetier\Repetier.ino"
#include "E:\Dropbox\GitHub\Repetier-Firmware\Repetier\Commands.cpp"
#include "E:\Dropbox\GitHub\Repetier-Firmware\Repetier\Configuration.h"
#include "E:\Dropbox\GitHub\Repetier-Firmware\Repetier\Eeprom.cpp"
#include "E:\Dropbox\GitHub\Repetier-Firmware\Repetier\Eeprom.h"
#include "E:\Dropbox\GitHub\Repetier-Firmware\Repetier\Extruder.cpp"
#include "E:\Dropbox\GitHub\Repetier-Firmware\Repetier\FatStructs.h"
#include "E:\Dropbox\GitHub\Repetier-Firmware\Repetier\Reptier.h"
#include "E:\Dropbox\GitHub\Repetier-Firmware\Repetier\SDCard.cpp"
#include "E:\Dropbox\GitHub\Repetier-Firmware\Repetier\SdFat.cpp"
#include "E:\Dropbox\GitHub\Repetier-Firmware\Repetier\SdFat.h"
#include "E:\Dropbox\GitHub\Repetier-Firmware\Repetier\fastio.h"
#include "E:\Dropbox\GitHub\Repetier-Firmware\Repetier\gcode.cpp"
#include "E:\Dropbox\GitHub\Repetier-Firmware\Repetier\gcode.h"
#include "E:\Dropbox\GitHub\Repetier-Firmware\Repetier\motion.cpp"
#include "E:\Dropbox\GitHub\Repetier-Firmware\Repetier\pins.h"
#include "E:\Dropbox\GitHub\Repetier-Firmware\Repetier\ui.cpp"
#include "E:\Dropbox\GitHub\Repetier-Firmware\Repetier\ui.h"
#include "E:\Dropbox\GitHub\Repetier-Firmware\Repetier\uiconfig.h"
#include "E:\Dropbox\GitHub\Repetier-Firmware\Repetier\uilang.h"
#include "E:\Dropbox\GitHub\Repetier-Firmware\Repetier\uimenu.h"
