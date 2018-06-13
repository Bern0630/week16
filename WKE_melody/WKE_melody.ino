/*
  Melody

  Plays a melody

  circuit:
  - 8 ohm speaker on digital pin 8

  created 21 Jan 2010
  modified 30 Aug 2011
  by Tom Igoe

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Tone
*/

#include "pitches.h"

int melody[] = {
  NOTE_G4, NOTE_G4, NOTE_E4, NOTE_D4, NOTE_E4, NOTE_D4, NOTE_C4, 
  NOTE_E4, NOTE_D4, NOTE_C4, NOTE_A3, NOTE_G3, NOTE_A3, NOTE_G3, 
  NOTE_A3, NOTE_A3, NOTE_C4, NOTE_A3, NOTE_C4, NOTE_D4, NOTE_E4, 
  NOTE_D4, NOTE_D4, NOTE_G4, NOTE_G4, NOTE_E4, NOTE_D4, NOTE_C4, 
};

int noteDurations[] = {
  6, 16, 8, 8, 8, 8, 4, 
  6, 16, 8, 8, 8, 8, 4, 
  6, 16, 8, 8, 8, 8, 4,
  6, 16, 8, 8, 8, 8, 4,
};

void play(int *melody, int *noteDurations, int num){
  for(int note = 0; note < num; note++){
    int noteDuration = 3000 / noteDurations[note];
    tone(8, melody[note], noteDuration);

    delay(noteDuration * 1.30);
  }
}

void setup(){
    play(melody, noteDurations, sizeof(melody) / sizeof(int));
  
  delay(2000);
}

void loop(){
}


