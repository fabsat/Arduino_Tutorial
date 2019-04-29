void setup () {
  Serial.begin (9600);
}

void loop () {
  int a = 5;
  a = a + 3;
  
  Serial.println (a);

  delay (1000);
}
