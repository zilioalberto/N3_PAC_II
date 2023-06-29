/*

sumo_b_new.h

Autor: Alberto Zilio
Maio 2023

*/

#include "Arduino.h"
#include "sumo_b_new.h"

sumo_b_n::sumo_b_n(int letter)

{
_letter       = letter;

 // Em caso de detecção do oponente



//********************************** Swich case  *************************************************

switch (_letter)

{
 
case 0: //

_RSpeed = 0; //255
_LSpeed = 0; // 255

 break;

 case 49: // para esquerda

_RSpeed = 255; //255
_LSpeed = -255; // 255

 break;


 case 50: // para frente

_RSpeed = 255; //255
_LSpeed = 255; // 255

 break;


 case 51: // para direita

_RSpeed = -255; //255
_LSpeed = 255; // 255

 break;



 case 52: // para tras

_RSpeed = -255; //255
_LSpeed = -255; // 255

 break;

default:
_RSpeed = 0;
_LSpeed = 0;
 break;
}


};

int sumo_b_n::getRSpeed()              //valor retornado de de velocidade para motor direita
{

return _RSpeed;

}
int sumo_b_n::getLSpeed()            //valor retornado de de velocidade para motor esquerda
{
return _LSpeed;
}

int sumo_b_n::getIndex()
{
  return _index;
}

