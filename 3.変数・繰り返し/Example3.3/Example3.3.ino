void setup () {
  Serial.begin (9600);

  int i;
  for (i = 0;i < 5;i++) {
    Serial.println (i);
    delay (1000);
  }
}

void loop () {

}
