void setup () {
  Serial.begin (9600);
  pinMode (2, OUTPUT);

  int i;
  for (i = 0;i < 5;i++) {
    digitalWrite (2, HIGH);
    delay (1000);
    digitalWrite (2, LOW);
    delay (1000);
  }
}

void loop () {

}
