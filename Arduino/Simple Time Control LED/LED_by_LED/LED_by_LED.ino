#define L0 8
#define L1 9
#define L2 10
#define L3 11
#define L4 12

#define GND 7
#define timeOn 200              // LED on for 100ms
#define timeOff 200             // LED off for 200ms

void setup() {
  // put your setup code here, to run once:
  pinMode(L0, OUTPUT);       // set L0 (pin 8) as output pin
  pinMode(L1, OUTPUT);       // set L1 (pin 9) as output pin
  pinMode(L2, OUTPUT);       // set L2 (pin 10) as output pin
  pinMode(L3, OUTPUT);       // set L3 (pin 11) as output pin
  pinMode(L4, OUTPUT);       // set L4 (pin 12) as output pin
  
  pinMode(GND, OUTPUT);         // set pin 7 as output pin
  digitalWrite(GND, LOW);       // set pin 7 as GND
}

void loop() {
  // put your main code here, to run repeatedly:

  // reset LED
  digitalWrite(L0, LOW);
  digitalWrite(L1, LOW);
  digitalWrite(L2, LOW);
  digitalWrite(L3, LOW);
  digitalWrite(L4, LOW);

  delay(timeOn);

  byte arr[5] = {L0, L1, L2, L3, L4};
  for(int i = 1; i < 6; i ++)
  {
    for(int j = 0; j < i; j++)
    {
      digitalWrite(arr[j], HIGH);
    }
    delay(timeOn);
  }

}
