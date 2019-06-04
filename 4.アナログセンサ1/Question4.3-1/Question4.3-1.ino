void setup () {
  pinMode (2, OUTPUT);
  Serial.begin (9600);
}

void loop () {
  int value = analogRead (0);
  if (value > 800) {
    digitalWrite (2, HIGH);
  } else {
    digitalWrite (2, LOW);
  }
}
