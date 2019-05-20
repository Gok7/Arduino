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
//-----------------------------------------------------------------------------
int sensorPin_1 = A0;
float sensorValue_1 = 0;

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
        
        digitalWrite(PORT_LED_1, HIGH);
       
    }
    return 1;
}
