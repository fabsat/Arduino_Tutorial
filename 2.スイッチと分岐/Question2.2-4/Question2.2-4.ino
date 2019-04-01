void setup () {
  pinMode (2, INPUT);
  pinMode (3, OUTPUT);

  digitalWrite (3, HIGH);
}

void loop () {
  if (digitalRead (2) == 1) {
    digitalWrite (3, LOW);
  }
}
