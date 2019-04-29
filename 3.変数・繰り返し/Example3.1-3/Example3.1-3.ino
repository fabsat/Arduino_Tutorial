void setup () {
  Serial.begin (9600);
}

void loop () {
  int a = 5;
  int b = 4;
  int result = a + b;
  
  Serial.println (result);

  delay (1000);
}
