void setup () {
  pinMode (2, OUTPUT);
}

void loop () {
  int value = analogRead (0);
  if (value > 500) {
    digitalWrite (2, HIGH);
  } else {
    digitalWrite (2, LOW);
  }
}
