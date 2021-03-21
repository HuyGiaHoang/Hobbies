void setup() {
  Serial.begin(9600);             // set up the serial connection with baud rate 9600
  pinMode(13, OUTPUT);
}

void loop() {
  if(analogRead(A0) < 512)        // turn OFF the LED if read value is less than 512 (Half way)
  {
    digitalWrite(13, LOW);
  }
  else if(analogRead(A0) > 900)   // turn ON the LED if value is more than 900
  {
    digitalWrite(13, HIGH);
  }
  else
  {
    digitalWrite(13, HIGH);       // Blinking and print read value to terminal
    delay(150);
    digitalWrite(13, LOW);
    delay(150);

    Serial.println(analogRead(A0));
    Serial.println("Blinking...");
  }
}
