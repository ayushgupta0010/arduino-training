#include "pitches.h"
#include "setlist.h"

#define SPEAKER 5
#define POTENTIOMETER 2
#define LED_PIN 4

int NOTE_DUR = 137;
int value;

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  value = analogRead(POTENTIOMETER);

  if(value >= 0 && value <= 341) {
    song1();
  }
  else if(value >= 342 && value <= 684) {
    song2();
  }
  else {
    song3();
  }
}

void play(int note, int dur) {
  tone(SPEAKER, note);
  delay(dur * NOTE_DUR);
  noTone(SPEAKER);
  delay(dur * NOTE_DUR / 3);
}

void song1() {
  blink(1);
  TakeOnMe(SPEAKER);
}

void song2() {
  blink(2);
  Pacman(SPEAKER);
}

void song3() {
  blink(3);
  CantinaBand(SPEAKER);
}

void blink(int song) {
  if(song == 1) {
    digitalWrite(LED_PIN, HIGH);
    delay(500);
    digitalWrite(LED_PIN, LOW);
  }
  else if(song == 2) {
    digitalWrite(LED_PIN, HIGH);
    delay(500);
    digitalWrite(LED_PIN, LOW);
    delay(500);
    digitalWrite(LED_PIN, HIGH);
    delay(500);
    digitalWrite(LED_PIN, LOW);
  }
  else {
    digitalWrite(LED_PIN, HIGH);
    delay(500);
    digitalWrite(LED_PIN, LOW);
    delay(500);
    digitalWrite(LED_PIN, HIGH);
    delay(500);
    digitalWrite(LED_PIN, LOW);
    delay(500);
    digitalWrite(LED_PIN, HIGH);
    delay(500);
    digitalWrite(LED_PIN, LOW);
  }
}
