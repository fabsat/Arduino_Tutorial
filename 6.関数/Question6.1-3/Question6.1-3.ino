void led (int count) {
  int i;
  for (i = 0;i < count;i++) {
    digitalWrite (2, HIGH);
    delay (1000);
    digitalWrite (2, LOW);
    delay (1000); 
  }
}

void setup () {
  Serial.begin (9600);
  pinMode (2, OUTPUT);

  led (5);
}

void loop () {

}
