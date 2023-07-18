#include <HID.h>
#include <Keyboard.h>

const int ButtonPin = 2;
const int ButtonPin2 = 3;
String Button_1 = ("123456");

void setup() {
  pinMode(ButtonPin, INPUT_PULLUP);
  pinMode(ButtonPin2, INPUT_PULLUP);
  Keyboard.begin();
}

void loop() {
  int Button = digitalRead(ButtonPin);
  int Button2 = digitalRead(ButtonPin2);

  if (Button == LOW) {
    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    delay(1000);
    Keyboard.print(Button_1);
    delay(1000);
    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    delay(1000);
  }

  if (Button2 == LOW) {
    Keyboard.press(KEY_LEFT_GUI); 
    delay(100); 
    Keyboard.press('l');
    delay(300);
    Keyboard.releaseAll();
  }
}
