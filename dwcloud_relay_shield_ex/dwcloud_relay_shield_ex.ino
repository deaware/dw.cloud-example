#define RELAY1_PIN        24
#define RELAY2_PIN        25
#define RELAY3_PIN        26
#define RELAY4_PIN        27

void setup() {
  // put your setup code here, to run once:
  pinMode(RELAY1_PIN, OUTPUT);
  pinMode(RELAY2_PIN, OUTPUT);
  pinMode(RELAY3_PIN, OUTPUT);
  pinMode(RELAY4_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (uint8_t i=RELAY1_PIN; i<=RELAY4_PIN; i++) {
    digitalWrite(i, HIGH);
    delay(500);
  }
  
  for (uint8_t i=RELAY1_PIN; i<=RELAY4_PIN; i++) {
    digitalWrite(i, LOW);
    delay(500);
  }
  
  delay(2000);
}
