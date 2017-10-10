
// Demo code for Grove - Temperature Sensor V1.1/1.2
// Loovee @ 2015-8-26
//guillaume de Belinay
//ENSAM 10-2017

#include <math.h>

const int B = 4275;               // B value of the thermistor
const int R0 = 100000;            // R0 = 100k
const int pinTempSensor = A3;     // Grove - Temperature Sensor connect to A3

void setup()
{
    Serial.begin(9600);           // permet de comuniquer avec le moniteur serie
}

void loop()
{
    int a = analogRead(pinTempSensor);  //assigne la valeur de pinTempSensor a a


    float R = 1023.0/a-1.0;             
    R = R0*R;

    float temperature = 1.0/(log(R/R0)/B+1/298.15)-273.15; 
    /*
 * Fait le calcul pour deduire la temperature a partir de la variation de la termistense, 
 * grace au pont diviseur de tenssion 
 */

    Serial.print("temperature = ");       //affiche sur le moniteur "temperature ="
    Serial.println(temperature);          //affiche sur le moniteur "la valeur de la temperature"

    delay(100);                          //laisse attendre 0.1 seconde
} 



