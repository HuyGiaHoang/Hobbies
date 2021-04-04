// This program use random number generator in order to play a random LED blinking pattern

#define L0 8
#define L1 9
#define L2 10
#define L3 11
#define L4 12

#define timeOn 200              // LED on for 200ms
#define timeOff 200             // LED off for 200ms

void setup() {
  // put your setup code here, to run once:
  pinMode(L0, OUTPUT);       // set L0 (pin 8) as output pin
  pinMode(L1, OUTPUT);       // set L1 (pin 9) as output pin
  pinMode(L2, OUTPUT);       // set L2 (pin 10) as output pin
  pinMode(L3, OUTPUT);       // set L3 (pin 11) as output pin
  pinMode(L4, OUTPUT);       // set L4 (pin 12) as output pin
  
  pinMode(3, INPUT_PULLUP);  // set pin 3 as input pin for button and use INTERNAL resistor
  Serial.begin(9600);
}

void loop() {
  long int num = 0;
  // put your main code here, to run repeatedly:
  if(digitalRead(3) == 0)     // check if Arduino input pin (3) is low level
  {
    while(digitalRead(3) == 0);

    // after release button:

    num = random(1, 4);       // choose a random pattern based on this number
    Serial.println(num);      // to the monitor for observation
  }

  if(num == 1)                // first parttern: BLINK 5 LEDs AT THE SAME TIME 3 times
  {
    for(int i = 0; i < 3; i++)
    {
      digitalWrite(L0, HIGH); // 5V 
      digitalWrite(L1, HIGH);
      digitalWrite(L2, HIGH);
      digitalWrite(L3, HIGH);
      digitalWrite(L4, 1);
      delay(timeOn);

      // reset LED
      digitalWrite(L0, LOW);
      digitalWrite(L1, LOW);
      digitalWrite(L2, LOW);
      digitalWrite(L3, LOW);
      digitalWrite(L4, LOW);
      delay(timeOff);
    }
    
    num = 0;                  // reset random number
  }
  
  if(num == 2)                // second pattern: BLINK LEDs FROM ONE END TO ANOTHER 3 times
  {
    byte arr[5] = {L0, L1, L2, L3, L4};
    
    for(int i = 0; i < 3; i++)
    {
      for(int i = 1; i < 6; i ++)
      {
        for(int j = 0; j < i; j++)
        {
          digitalWrite(arr[j], HIGH);
        }
        delay(timeOn);
      }
      digitalWrite(L0, LOW);
      digitalWrite(L1, LOW);
      digitalWrite(L2, LOW);
      digitalWrite(L3, LOW);
      digitalWrite(L4, LOW);
      delay(timeOff);
    }
    
    num = 0;                  // reset random number
  }

  if(num == 3)                // third pattern: BLINK LEDs FROM MIDDLE TO EDGEs 3 times
  {
    byte arr[5] = {L0, L1, L2, L3, L4};
    for(int i = 0; i < 3; i++)
    {
      for(int i = 1; i < 4; i ++)
      {
        for(int j = 0; j < i; j++)
        {
          digitalWrite(arr[2-j], HIGH);
          digitalWrite(arr[2+j], HIGH);
        }
        delay(timeOn);
      }
      digitalWrite(L0, LOW);
      digitalWrite(L1, LOW);
      digitalWrite(L2, LOW);
      digitalWrite(L3, LOW);
      digitalWrite(L4, LOW);
      delay(timeOff);
    }
    num = 0;                  // reset random number
  }
  
  delay(50);                  // for debouncing
}
