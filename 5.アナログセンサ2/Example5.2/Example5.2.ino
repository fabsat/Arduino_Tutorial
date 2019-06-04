void setup () {
  Serial.begin (9600);
}

void loop () {
  int x = analogRead (0);
  int y = analogRead (1);
  int z = analogRead (2);
  Serial.print ("X : ");
  Serial.print (x);
  Serial.print (" Y : ");
  Serial.print (y);
  Serial.print (" Z : ");
  Serial.println (z);
  delay (100);
}
