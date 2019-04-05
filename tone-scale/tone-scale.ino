
int pin = 12;
void setup() {
pinMode(12,OUTPUT);
}


void loop() {
  // no need to repeat the melody.
    // iterate over the notes of the melody:
/*    tone(pin, 261, 1000);
  delay(1000);
    tone(pin, 277);
  delay(1000);
    tone(pin, 294, 1000);
  delay(1000);
    tone(pin, 311, 1000);
  delay(1000);
    tone(pin, 330, 1000);
  delay(1000);
    tone(pin, 349, 1000);
  delay(1000);
    tone(pin, 370, 1000);
  delay(1000);
    tone(pin, 392, 1000);
  delay(1000);
    tone(pin, 415, 1000);
  delay(1000);
    tone(pin, 450, 1000);
  delay(1000);

*/

digitalWrite(12,HIGH);
delay(1000);
digitalWrite(12,LOW);
delay(1000);
}
