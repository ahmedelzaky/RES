#define R_LED 13
#define Y_LED 12
#define G_LED 11
#define B_LED 10
#define R2_LED 9
#define Y2_LED 8
#define G2_LED 7
#define B2_LED 6


void setup() {
  pinMode(R_LED, OUTPUT);
  pinMode(Y_LED, OUTPUT);
  pinMode(G_LED, OUTPUT);
  pinMode(B_LED, OUTPUT);
  pinMode(R2_LED, OUTPUT);
  pinMode(Y2_LED, OUTPUT);
  pinMode(G2_LED, OUTPUT);
  pinMode(B2_LED, OUTPUT);
}

void loop() {

  //Flashing Leds every 500ms
  digitalWrite(R_LED, HIGH);
  digitalWrite(Y_LED, HIGH);
  digitalWrite(G_LED, HIGH);
  digitalWrite(B_LED, HIGH);
  digitalWrite(R2_LED, HIGH);
  digitalWrite(Y2_LED, HIGH);
  digitalWrite(G2_LED, HIGH);
  digitalWrite(B2_LED, HIGH);
  delay(500);

  digitalWrite(R_LED, LOW);
  digitalWrite(Y_LED, LOW);
  digitalWrite(G_LED, LOW);
  digitalWrite(B_LED, LOW);
  digitalWrite(R2_LED, LOW);
  digitalWrite(Y2_LED, LOW);
  digitalWrite(G2_LED, LOW);
  digitalWrite(B2_LED, LOW);
  delay(100);
  //Shifting leds every 500ms
  digitalWrite(R_LED, HIGH);
  delay(500);
  digitalWrite(R_LED, LOW);

  digitalWrite(Y_LED, HIGH);
  delay(500);
  digitalWrite(Y_LED, LOW);

  digitalWrite(G_LED, HIGH);
  delay(500);
  digitalWrite(G_LED, LOW);

  digitalWrite(B_LED, HIGH);
  delay(500);
  digitalWrite(B_LED, LOW);

  digitalWrite(R2_LED, HIGH);
  delay(500);
  digitalWrite(R2_LED, LOW);

  digitalWrite(Y2_LED, HIGH);
  delay(500);
  digitalWrite(Y2_LED, LOW);

  digitalWrite(G2_LED, HIGH);
  delay(500);
  digitalWrite(G2_LED, LOW);

  digitalWrite(B2_LED, HIGH);
  delay(500);
  digitalWrite(B2_LED, LOW);

  //2 LEDs converging every 500ms
}
