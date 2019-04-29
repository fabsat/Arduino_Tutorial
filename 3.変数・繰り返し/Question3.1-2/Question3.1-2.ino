void setup () {
  Serial.begin (9600);
}

void loop () {
  int a = 2;
  int b = 3;
  double rad = radians (42.0);
  double result = a * b * cos (rad);

  Serial.println (result);

  delay (1000);
}
