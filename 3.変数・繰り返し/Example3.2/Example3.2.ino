void setup () {
  Serial.begin (9600);

  int i;
  for (i = 0;i < 5;i++) {
    Serial.println ("Hello");
    delay (1000);
  }
}

void loop () {
  
}
