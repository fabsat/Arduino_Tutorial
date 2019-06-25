int add (int a, int b) {
  return a + b;
}

void setup () {
  Serial.begin (9600);
}

void loop () {
  int a = 2;
  int b = 3;

  int result = add (a, b);

  Serial.println (result);

  delay (1000);
}
