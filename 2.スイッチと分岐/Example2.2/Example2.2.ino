void setup () {
  pinMode (2, OUTPUT);
  pinMode (3, INPUT);
}

void loop () {
  if (digitalRead (3) == 1) {
    digitalWrite (2, HIGH);
  } else {
    digitalWrite (2, LOW);
  }
}
