void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(3, INPUT);        // make external pull up/down resistor
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(3) == 0)   // check if arduino input pin in LOW level 0
  {
    while(digitalRead(3) == 0); // check if Still pressing the button

    // Blink LED many times after release the button
    for(int i = 0; i < 7; i ++)
    {
      digitalWrite(13, HIGH);
      delay(100);
      digitalWrite(13, LOW);
      delay(100);
    }
    digitalWrite(13, HIGH);
    delay(300);
    digitalWrite(13, LOW);
    delay(300);

    digitalWrite(13, HIGH);
    delay(500);
    digitalWrite(13, LOW);
    delay(500);

    digitalWrite(13, HIGH);
    delay(700);
    digitalWrite(13, LOW);
    delay(700);

    digitalWrite(13, HIGH);
    delay(900);
    digitalWrite(13, LOW);
    delay(900);
  }
}
