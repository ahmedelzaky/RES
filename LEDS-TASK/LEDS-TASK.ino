#define R_LED 13
#define Y_LED 12
#define G_LED 11
#define B_LED 10
#define R2_LED 9
#define Y2_LED 8
#define G2_LED 7
#define B2_LED 6

const int F_DELAY = 500;

int leds[] = { R_LED, Y_LED, G_LED, B_LED, R2_LED, Y2_LED, G2_LED, B2_LED };
int numLeds = sizeof(leds) / sizeof(leds[0]);



void setup() {
  for (int i = 0; i < numLeds; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  animateFlash();
  animateShift();
  //animateConverge();
}


void animateFlash() {

  for (int i = 0; i < numLeds; i++) {
    digitalWrite(leds[i], HIGH);
  }

  delay(F_DELAY);

  for (int i = 0; i < numLeds; i++) {
    digitalWrite(leds[i], LOW);
  }
}

void animateShift() {

  for (int i = 0; i < numLeds; i++) {
    digitalWrite(leds[i], HIGH);
    delay(F_DELAY);
    digitalWrite(leds[i], LOW);
  }
}
