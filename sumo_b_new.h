/*

sumo_b_new.h

Autor: Alberto Zilio
Maio 2023

*/

#ifndef sumo_b_new
#define sumo_b_new

#include "Arduino.h"

class sumo_b_n{

  public:
  sumo_b_n(int letter)    ;     
 
  int getRSpeed();               //valor retornado de de velocidade para motor direita
  int getLSpeed();               //valor retornado de de velocidade para motor esquerda
  int getIndex();                //retorna o valor do index atuaal

  private:
  int  _letter;
  int   _RSpeed;              //Variavel interna velocidade direita
  int   _LSpeed;              //Variavel interna velocidade esquerda
  int   _index;              //Variavel do switch case
  unsigned long _atTime;      //Atual tempo arduino;
};




#endif