void setup () {
  Serial.begin (9600);

  int i;
  for (i = 2;i <= 10;i += 2) {
    Serial.println (i);
    delay (1000);
  }
}

void loop () {
  
}
