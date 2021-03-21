
int countOn = 0;

void setup() {
  // initialize digital pin LED_BUILTIN as an output. 
  pinMode(LED_BUILTIN, OUTPUT);     // set pin 13 as output
  Serial.begin(9600);               // set up baud rate 9600 for serial connection

  Serial.println("Hello world! Blinking after 3 seconds...");
  delay(1000);

  Serial.print("2 seconds...\n");
  delay(1000);

  Serial.print("1 second...\n");
  delay(1000);
}

// the loop function runs over and over again forever
void loop() {

  Serial.print("LED on: ");
  Serial.println(countOn++);
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  
  
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
