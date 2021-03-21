void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  pinMode(3, INPUT_PULLUP);   // set pin 3 as input pin and use INTERNAL resistor
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(3) == 0)     // check if Arduino input pin (3) is low level
  {
    while(digitalRead(3) == 0);

    // after release button:

    for(int i = 0; i < 10; i ++)
    {
      digitalWrite(13, HIGH);
      delay(100);
      digitalWrite(13, LOW);
      delay(100);
    }
    for(int i = 0; i < 7; i ++)
    {
      digitalWrite(13, HIGH);
      delay(200);
      digitalWrite(13, LOW);
      delay(200);
    }
  }
}
