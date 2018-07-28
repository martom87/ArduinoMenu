
//The full code is in library example file Quick_tour.ino
#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>
#include <buttons.h>
#include <MENWIZ.h>
#include <EEPROM.h>

// DEFINE ARDUINO PINS FOR THE NAVIGATION BUTTONS
#define UP_BOTTON_PIN       9
#define DOWN_BOTTON_PIN     10
#define LEFT_BOTTON_PIN     7
#define RIGHT_BOTTON_PIN    8
#define CONFIRM_BOTTON_PIN  12
#define ESCAPE_BOTTON_PIN   11


// create lcd obj using LiquidCrystal lib
LiquidCrystal_I2C lcd(0x3F, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

menwiz menu1;
int list,sp=110;
 

void setup() {
makeMenu1();

                     
}

void loop() {   
menu1.draw();
}










