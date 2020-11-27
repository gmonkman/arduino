/*
 Name:		atari_to_kb.ino
 Created:	10/29/2020 4:20:36 PM
 Author:	Graham Monkman
*/

// the setup function runs once when you press reset or power the board

// Arduino pin assignments

//  DB9 Ard f
//  1   2   U
//  2   3   D
//  3   4   L
//  4   5   R
//  5   10  B input paddle
//  6   6   Fire
//  7   +5V
//  8   Grd
//  9   9   A input paddle

// DB9 Pin 5 +5V
// DB9 Pin 8 Grd


void setup() {
    pinMode(2, INPUT);
    delay(1000); //delay for one second to stabilise
    Serial.begin(9600);
}

// the loop function runs over and over again until power down or reset
void loop() {
    int v = digitalRead(2);
    for (int j = 0; j < 100; j++) {
        Serial.println(v);
        delay(10);
    }
}
