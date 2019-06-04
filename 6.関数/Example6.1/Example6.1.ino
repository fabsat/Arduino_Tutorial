double getAverage (double a, double b) {
  double average = (a + b) / 2.0;
  return average;
}

void setup () {
  Serial.begin (9600);
}

void loop () {
  double a = 2.0;
  double b = 6.0;

  double result = getAverage (a, b);
  Serial.println (result);

  delay (1000);
}
