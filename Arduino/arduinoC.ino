String key;

void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    key = Serial.readString();
    Serial.print(key);
  }
  if ((key == "on")) {
    digitalWrite(13, true);
  }
    if ((key == "off")) {
    digitalWrite(13, false);
  }
}
