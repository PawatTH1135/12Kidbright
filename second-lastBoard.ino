#include <Wire.h>
#include <Adafruit_GFX.h>
#include "Adafruit_LEDBackpack.h"

Adafruit_8x16minimatrix matrix = Adafruit_8x16minimatrix();

const int buttonPin = 18;
int buttonState;
int buttonState1;
const int buttonPin1 = 14;
const int pin = 19;
const int pin1 = 23;

void setup() {
  Serial.begin(115200);
  matrix.begin(0x70);
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(buttonPin1, INPUT_PULLUP);
  pinMode(26, OUTPUT);
  pinMode(17, OUTPUT);
  pinMode(pin, INPUT);
  pinMode(pin1, OUTPUT);
  digitalWrite(17, HIGH);
  matrix.clear();
  matrix.writeDisplay();
}
static const uint8_t PROGMEM
led_0[] =
{ B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000
},
led_1[] =
{ B10000000,
  B10000000,
  B10000000,
  B10000000,
  B10000000,
  B10000000,
  B10000000,
  B10000000
},
led_2[] =
{ B11000000,
  B11000000,
  B11000000,
  B11000000,
  B11000000,
  B11000000,
  B11000000,
  B11000000
},
led_3[] =
{ B11100000,
  B11100000,
  B11100000,
  B11100000,
  B11100000,
  B11100000,
  B11100000,
  B11100000
},
led_4[] =
{ B11110000,
  B11110000,
  B11110000,
  B11110000,
  B11110000,
  B11110000,
  B11110000,
  B11110000,
},
led_5[] =
{ B11111000,
  B11111000,
  B11111000,
  B11111000,
  B11111000,
  B11111000,
  B11111000,
  B11111000
},
led_6[] =
{ B11111100,
  B11111100,
  B11111100,
  B11111100,
  B11111100,
  B11111100,
  B11111100,
  B11111100
},
led_7[] =
{ B11111110,
  B11111110,
  B11111110,
  B11111110,
  B11111110,
  B11111110,
  B11111110,
  B11111110,
},
led_8[] =
{ B11111111,
  B11111111,
  B11111111,
  B11111111,
  B11111111,
  B11111111,
  B11111111,
  B11111111
};

void play(PROGMEM) {
  matrix.setRotation(0);
  matrix.setTextSize(1);
  matrix.setTextWrap(false);
  matrix.setTextColor(LED_ON);
  matrix.setRotation(1);
  //  matrix.clear();
  matrix.drawBitmap(0, 0, led_0, 8, 8, LED_ON);
  matrix.writeDisplay();
  delay(100);
  //  matrix.clear();
  matrix.drawBitmap(0, 0, led_1, 8, 8, LED_ON);
  matrix.writeDisplay();
  delay(100);
  //  matrix.clear();
  matrix.drawBitmap(0, 0, led_2, 8, 8, LED_ON);
  matrix.writeDisplay();
  delay(100);
  //  matrix.clear();
  matrix.drawBitmap(0, 0, led_3, 8, 8, LED_ON);
  matrix.writeDisplay();
  delay(100);
  //  matrix.clear();
  //  matrix.clear();
  matrix.drawBitmap(0, 0, led_4, 8, 8, LED_ON);
  matrix.writeDisplay();
  delay(100);
  //  matrix.clear();
  matrix.drawBitmap(0, 0, led_5, 8, 8, LED_ON);
  matrix.writeDisplay();
  delay(100);
  //  matrix.clear();
  matrix.drawBitmap(0, 0, led_6, 8, 8, LED_ON);
  matrix.writeDisplay();
  delay(100);
  //  matrix.clear();
  matrix.drawBitmap(0, 0, led_7, 8, 8, LED_ON);
  matrix.writeDisplay();
  delay(100);
  //  matrix.clear();
  matrix.drawBitmap(0, 0, led_8, 8,  8, LED_ON);
  matrix.writeDisplay();
  delay(100);
  matrix.drawBitmap(8, 0, led_1, 8, 8, LED_ON);
  matrix.writeDisplay();
  delay(100);
  matrix.drawBitmap(8, 0, led_2, 8, 8, LED_ON);
  matrix.writeDisplay();
  delay(100);
  matrix.drawBitmap(8, 0, led_3, 8, 8, LED_ON);
  matrix.writeDisplay();
  delay(100);
  matrix.drawBitmap(8, 0, led_4, 8, 8, LED_ON);
  matrix.writeDisplay();
  delay(100);
  matrix.drawBitmap(8, 0, led_5, 8, 8, LED_ON);
  matrix.writeDisplay();
  delay(100);
  matrix.drawBitmap(8, 0, led_6, 8, 8, LED_ON);
  matrix.writeDisplay();
  delay(100);
  matrix.drawBitmap(8, 0, led_7, 8, 8, LED_ON);
  matrix.writeDisplay();
  delay(100);
  matrix.drawBitmap(8, 0, led_8, 8, 8, LED_ON);
  matrix.writeDisplay();
  delay(100);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  buttonState1 = digitalRead(buttonPin1);
  Serial.println(buttonState);
  if (buttonState == 0) {
    delay(245);
    matrix.setRotation(0);
    matrix.setTextSize(1);
    matrix.setTextWrap(false);
    matrix.setTextColor(LED_ON);
    matrix.setRotation(1);
    play();
    digitalWrite(26, HIGH);
    digitalWrite(17, LOW);
    for (int v = 0; v = 10000000; v++) {
      matrix.clear();
      matrix.writeDisplay();
    }
    //  for (int8_t x = 7; x >= -36; x--) {
    //      matrix.clear();
    //      matriux.setCursor(x, 0);
    //      matrix.print("World");
    //      matrix.writeDisplay();
    //      delay(100);
    //    }
  }

  if (buttonState1 == 0) {
    matrix.clear();
    matrix.writeDisplay();
    digitalWrite(26, LOW);
    digitalWrite(17, HIGH);
  }
  int pinState = digitalRead(pin);
  Serial.println(pinState);
  if (pinState = 1) {
    digitalWrite(pin1, HIGH);
    digitalWrite(17, HIGH);
  }
  delay(1);
}
