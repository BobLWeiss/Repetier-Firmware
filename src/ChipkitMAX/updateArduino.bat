REM Copies hardware independent files from chipkit to avr & due versions

copy ChipkitMAX\Repetier\Commands.*  ArduinoAVR\Repetier
copy ChipkitMAX\Repetier\Communication.*  ArduinoAVR\Repetier
copy ChipkitMAX\Repetier\Eeprom.*  ArduinoAVR\Repetier
copy ChipkitMAX\Repetier\Extruder.*  ArduinoAVR\Repetier
copy ChipkitMAX\Repetier\FatStructs.h  ArduinoAVR\Repetier
copy ChipkitMAX\Repetier\gcode.*  ArduinoAVR\Repetier
copy ChipkitMAX\Repetier\motion.*  ArduinoAVR\Repetier
copy ChipkitMAX\Repetier\Printer.*  ArduinoAVR\Repetier
copy ChipkitMAX\Repetier\SDCard.cpp  ArduinoAVR\Repetier
copy ChipkitMAX\Repetier\SdFat.*  ArduinoAVR\Repetier
copy ChipkitMAX\Repetier\ui.*  ArduinoAVR\Repetier
copy ChipkitMAX\Repetier\uiconfig.h  ArduinoAVR\Repetier
copy ChipkitMAX\Repetier\uilang.h  ArduinoAVR\Repetier
copy ChipkitMAX\Repetier\uimenu.h  ArduinoAVR\Repetier

echo Copying finished. AVR tree is now up to date.

copy ChipkitMAX\Repetier\Commands.*  ArduinoDue\Repetier
copy ChipkitMAX\Repetier\Communication.*  ArduinoDue\Repetier
copy ChipkitMAX\Repetier\Eeprom.*  ArduinoDue\Repetier
copy ChipkitMAX\Repetier\Extruder.*  ArduinoDue\Repetier
copy ChipkitMAX\Repetier\FatStructs.h  ArduinoDue\Repetier
copy ChipkitMAX\Repetier\gcode.*  ArduinoDue\Repetier
copy ChipkitMAX\Repetier\motion.*  ArduinoDue\Repetier
copy ChipkitMAX\Repetier\Printer.*  ArduinoDue\Repetier
copy ChipkitMAX\Repetier\SDCard.cpp  ArduinoDue\Repetier
copy ChipkitMAX\Repetier\SdFat.*  ArduinoDue\Repetier
copy ChipkitMAX\Repetier\ui.*  ArduinoDue\Repetier
copy ChipkitMAX\Repetier\uiconfig.h  ArduinoDue\Repetier
copy ChipkitMAX\Repetier\uilang.h  ArduinoDue\Repetier
copy ChipkitMAX\Repetier\uimenu.h  ArduinoDue\Repetier

echo Copying finished. DUE tree is now up to date.
pause
