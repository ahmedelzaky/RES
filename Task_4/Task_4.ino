
#define led 3
int i;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {

  for (i = 0; i < 256; i++) {
    analogWrite(led, i);
    delay(10);
  }
  for (; i >= 0; i--) {
    analogWrite(led, i);
    delay(10);
  }
}
