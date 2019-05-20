/* 
 * File:   main.cpp
 * Author: Administrateur
 *
 * Created on 24 décembre 2013, 09:28
 */
#define ARDUINO_MAIN
#include <Arduino.h> 
#define PORT_LED_1 13
bool Etat_Led = false;
#define POSITION_CADRE_Y 40
#define HAUTEUR_CADRE ST7735_TFTWIDTH - POSITION_CADRE_Y
#define LARGEUR_CADRE ST7735_TFTHEIGHT 
#define DEBUG_PROJET_1
#ifdef DEBUG_PROJET_1
#include <iostream>
#endif
//-----------------------------------------------------------------------------
int Pot_Pin_0 = A0;
int Pot_Value_0 = 0;
int Pot_Pin_1 = A1;
int Pot_Value_1 = 0;
int Pot_Pin_2 = A2;
int Pot_Value_2 = 0;
int Pot_Pin_3 = A3;
int Pot_Value_3 = 0;

void Initialisation() {
    init();
    delay(1);
#if defined(USBCON)
    USBDevice.attach();
#endif 
    analogReadResolution(12); //config res 12 bits
    pinMode(PORT_LED_1, OUTPUT);
    Serial.begin(9600); // open a serial connection
}
//------------------------------------------------------------------------------

//

//void Lecture_Port_Anologique() {
//
//}
//------------------------------------------------------------------------------

int main(void) {
    Initialisation();
    while (1) {
        // read the value from the sensor:
        Pot_Value_0 = analogRead(Pot_Pin_0); //return integer value between 0-4095
        Pot_Value_0 = Pot_Value_0 / 4; //get a value between 0-1024
        //std::cout<<"Valeur Pot_0 = "<<Pot_Value_0<<std::endl;
        // turn the ledPin on
        digitalWrite(PORT_LED_1, HIGH);
        // stop the program for <sensorValue> milliseconds:
        delay(Pot_Value_0);
        // turn the ledPin off:
        digitalWrite(PORT_LED_1, LOW);
        // stop the program for <sensorValue> milliseconds:
        delay(Pot_Value_0);
    }
    return 1;
}
