void setup() {
  Serial.begin(9600);             // set up the serial connection with baud rate 9600
  
}

void loop() {
  Serial.println(analogRead(A0)); // print the read values from pin A0 to the terminal
  delay(1000);
}
