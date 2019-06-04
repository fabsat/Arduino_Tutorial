void setup () {
  Serial.begin (9600);
}

void loop () {
  int value = analogRead (0);
  double t = value / 204.0 / 0.01;
  Serial.println (t);

  delay (1000);
}
