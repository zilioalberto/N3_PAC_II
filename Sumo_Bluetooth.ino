// Programa teste parada por tempo quando encontrar linha branca na direita;

#include <Arduino.h>
#include <bridgeH_new.h>
#include <sumo_b_new.h>
#include <SoftwareSerial.h>


int speedD=0;
int speedE=0;
int letter=0;

SoftwareSerial bluetooth_t(11,10);




void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 bluetooth_t.begin(9600);

 Serial.println("Sumo_bluetooth");

 delay(1000);

}


void loop() {


//Bloco de controle da ponte H 

bridgeH_n bridgeH_D(3,4,5,speedD);
bridgeH_n bridgeH_E(7,8,6,speedE);


// Bloco de velocidadades pelo Bluetooth

sumo_b_n  sumo_b_1(letter); 

speedD =  sumo_b_1.getRSpeed();
speedE =  sumo_b_1.getLSpeed();


//Leitura do Bluetooh

while (bluetooth_t.available()){

 letter = bluetooth_t.read();

}
//letter = bluetooth_new.read();

  Serial.print(speedD);
  Serial.print("  ");
  Serial.print(speedE);
  Serial.print("  ");
  Serial.println(letter);
  Serial.print(" "); 
  Serial.println(sumo_b_1.getIndex());
 


}
