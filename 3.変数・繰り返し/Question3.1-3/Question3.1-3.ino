void setup () {
  Serial.begin (9600);
}

void loop () {
  double cx2 = pow (2, 2);
  double cy2 = pow (4, 2);
  double cz2 = pow (8, 2);
  double result = sqrt (cx2 + cy2 + cz2);

  Serial.println (result);

  delay (1000);
}
