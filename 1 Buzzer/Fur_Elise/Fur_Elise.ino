// Define frequency for each note
#define C3  131
#define Cs3 139
#define D3  147
#define Ds3 156
#define E3  165
#define F3  175
#define Fs3 185
#define G3  196
#define Gs3 208
#define A3  220
#define As3 233
#define B3  247

#define C4  262
#define Cs4 277
#define D4  294
#define Ds4 311
#define E4  330
#define F4  349
#define Fs4 370
#define G4  392
#define Gs4 415
#define A4  440
#define As4 466
#define B4  494

#define C5  523
#define Cs5 554
#define D5  587
#define Ds5 622
#define E5  660
#define F5  698
#define Fs5 740
#define G5  784
#define Gs5 831
#define A5  880
#define As5 932
#define B5  988

#define C6  1047
#define Cs6 1109
#define D6  1175
#define Ds6 1245
#define E6  1319
#define F6  1397
#define Fs6 1480
#define G6  1568
#define Gs6 1661
#define A6  1760
#define As6 1865
#define B6  1976

// Define tempo for the music
#define SIXTEENTH      222
#define EIGHTH         2*SIXTEENTH
#define DOTTED_EIGHTH  3*SIXTEENTH
#define QUARTER        4*SIXTEENTH
#define DOTTED_QUARTER 6*SIXTEENTH
#define HALF           8*SIXTEENTH
#define WHOLE          16*SIXTEENTH

#define BUZZER 9

#define button 13

void setup() 
{ 
  pinMode(BUZZER ,OUTPUT);

  pinMode(button, INPUT_PULLUP);
}
 
void loop() 
{
  if(digitalRead(button) == 0)        // check if Arduino input pin (13) is at LOW level
  {
    while(digitalRead(button) == 0);  // holding the button....
    
    // PART A ///////////////////////////////////////////////////////////////////////////
    commonPart1();
    note(BUZZER, A4, EIGHTH);
    delay(EIGHTH);
    
    commonPart1();
    note(BUZZER, A4, EIGHTH);
    delay(SIXTEENTH);
    note(BUZZER, B4, SIXTEENTH);
    note(BUZZER, C5, SIXTEENTH);
    note(BUZZER, D5, SIXTEENTH);
    
    commonPart2();
    commonPart1();
    note(BUZZER, A4, EIGHTH);
    delay(SIXTEENTH);
    note(BUZZER, B4, SIXTEENTH);
    note(BUZZER, C5, SIXTEENTH);
    note(BUZZER, D5, SIXTEENTH);

    commonPart2();
    commonPart1();
    note(BUZZER, A4, EIGHTH);
    delay(SIXTEENTH);
  }
}


void note(unsigned int pin, unsigned int note, unsigned int duration)
{
  tone(pin, note);
  delay(duration);
  noTone(pin);
}


void commonPart1()
{
  note(BUZZER, E5, SIXTEENTH);
  note(BUZZER, Ds5, SIXTEENTH);
  note(BUZZER, E5, SIXTEENTH);
  note(BUZZER, Ds5, SIXTEENTH);
  note(BUZZER, E5, SIXTEENTH);
  note(BUZZER, B4, SIXTEENTH);
  note(BUZZER, D5, SIXTEENTH);
  note(BUZZER, C5, SIXTEENTH);
  note(BUZZER, A4, EIGHTH);
  delay(SIXTEENTH);
  note(BUZZER, C4, SIXTEENTH);
  note(BUZZER, E4, SIXTEENTH);
  note(BUZZER, A4, SIXTEENTH);
  note(BUZZER, B4, EIGHTH);
  delay(SIXTEENTH);
  note(BUZZER, E4, SIXTEENTH);
  note(BUZZER, Gs4, SIXTEENTH);
  note(BUZZER, B4, SIXTEENTH);
  note(BUZZER, C5, EIGHTH);
  delay(SIXTEENTH);

  note(BUZZER, E4, SIXTEENTH);
  note(BUZZER, E5, SIXTEENTH);
  note(BUZZER, Ds5, SIXTEENTH);
  note(BUZZER, E5, SIXTEENTH);
  note(BUZZER, Ds5, SIXTEENTH);
  note(BUZZER, E5, SIXTEENTH);
  note(BUZZER, B4, SIXTEENTH);
  note(BUZZER, D5, SIXTEENTH);
  note(BUZZER, C5, SIXTEENTH);
  note(BUZZER, A4, EIGHTH);
  delay(SIXTEENTH);
  note(BUZZER, C4, SIXTEENTH);
  note(BUZZER, E4, SIXTEENTH);
  note(BUZZER, A4, SIXTEENTH);
  note(BUZZER, B4, EIGHTH);
  delay(SIXTEENTH);
  note(BUZZER, D4, SIXTEENTH);
  note(BUZZER, C5, SIXTEENTH);
  note(BUZZER, B4, SIXTEENTH);
}

void commonPart2()
{
  note(BUZZER, E5, DOTTED_EIGHTH);

  note(BUZZER, G4, SIXTEENTH);
  note(BUZZER, F5, SIXTEENTH);
  note(BUZZER, E5, SIXTEENTH);
  note(BUZZER, D5, DOTTED_EIGHTH);
  
  note(BUZZER, F4, SIXTEENTH);
  note(BUZZER, E5, SIXTEENTH);
  note(BUZZER, D5, SIXTEENTH);
  note(BUZZER, C5, DOTTED_EIGHTH);
  
  note(BUZZER, E4, SIXTEENTH);
  note(BUZZER, D5, SIXTEENTH);
  note(BUZZER, C5, SIXTEENTH);
  note(BUZZER, B4, EIGHTH);
  delay(SIXTEENTH);
  
  note(BUZZER, E4, SIXTEENTH);
  note(BUZZER, E5, SIXTEENTH);
  delay(SIXTEENTH);
  delay(SIXTEENTH);
  
  note(BUZZER, E5, SIXTEENTH);
  note(BUZZER, E6, SIXTEENTH);
  delay(SIXTEENTH);
  delay(SIXTEENTH);
  
  note(BUZZER, Ds5, SIXTEENTH);
  note(BUZZER, E5, SIXTEENTH);
  delay(SIXTEENTH);
  delay(SIXTEENTH);
  
  note(BUZZER, Ds5, SIXTEENTH);
}
