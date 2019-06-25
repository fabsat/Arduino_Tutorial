void setup () {
  Serial.begin (9600);
}

void loop () {
  if (Serial.read () == 'a') {
    digitalWrite (2, HIGH);
  }
}
