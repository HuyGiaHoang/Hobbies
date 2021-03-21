
int countOn = 0;

void setup() {
  // initialize digital pin LED_BUILTIN as an output. 
  pinMode(LED_BUILTIN, OUTPUT);     // set pin 13 as output
  Serial.begin(9600);               // set up baud rate 9600 for serial connection
}

// the loop function runs over and over again forever
void loop() {
  for(int i = 0; i < 12; i++)            // loop for counter
  {
    if(i % 2 == 0)
    {
      Serial.print("This is even: ");
      Serial.println(i);
      digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
      delay(500); 
    }
    else
    {
      Serial.print("This is odd: ");
      Serial.println(i);
      digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
      delay(500);
    }
  }             
}
