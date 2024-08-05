// DigiMouse Clicker 
// CAUTION!!!! This does click things!!!!!!!!
// Originally created by Sean Murphy (duckythescientist)

#include <DigiMouse.h>

void setup() {
  DigiMouse.begin(); //start or reenumerate USB - BREAKING CHANGE from old versions that didn't require this
}

void loop() {
  // If not using plentiful DigiMouse.delay(), make sure to call
  // DigiMouse.update() at least every 50ms
  
  // three buttons are the three LSBs of an unsigned char
  DigiMouse.setButtons(1<<0); //left click
  DigiMouse.delay(10);
  DigiMouse.setButtons(0); //unclick all
  DigiMouse.delay(10);

  DigiMouse.leftClick();


}