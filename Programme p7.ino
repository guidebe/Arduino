/* 
 *  Guillaume de Belinay
 *  ENSAM-10-10-2017
 */

#define led  7                  //la pin 7 serra appelé2 led

const int touchbutton = A2;     // touch button conecté a A3

void setup() {
 

  Serial.begin(9600);          // permet de comuniquer avec le moniteur serie
  pinMode(led, OUTPUT);        // permet de declarer la pin led comme sortie

}

void loop() {
  // put your main code here, to run repeatedly:
int i = digitalRead(touchbutton);  // assigne la valeur de touchboutton a i 

if (i == 1 ){                      // si i est egal a 1 alors:

digitalWrite(led, 1);              // envoie du courant dans la pin led(7)

}
else {                             // sinon:
  digitalWrite(led, LOW);          // ne mets pas de courants dans la pin led(7)
}

}

