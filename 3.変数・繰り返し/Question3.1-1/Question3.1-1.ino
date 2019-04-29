void setup () {
  Serial.begin (9600);
}

void loop () {
  double hayabusa1 = 510.0;
  double hayabusa2 = 600.0;
  double result = hayabusa2 / hayabusa1;

  Serial.println (result);

  delay (1000);
}
