#include "racional.h"

#include <cmath>
#include <iostream>

int mdc(int a,int b ){
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}



Racional::Racional() {
    numerador_ = 0;
    denominador_ = 1;
}

Racional::Racional(int n)  {
    numerador_ = n;
    denominador_ = 1;
}

Racional::Racional(int n, int d) {
    numerador_ = n;
    if(d!=0){
        denominador_ = d;
    }
}

int Racional::numerador() const {
  return numerador_;
}

int Racional::denominador() const {
  return denominador_;
}

Racional Racional::simetrico() const {
    Racional Oposto= Racional(numerador_*-1, denominador_);
    return Oposto;
}

Racional Racional::somar(Racional k) const {

    Racional soma = Racional(numerador_*k.denominador()+k.numerador()*denominador_, denominador_*k.denominador());
  return soma;
}

Racional Racional::subtrair(Racional k) const {
    Racional subtrai = Racional(numerador_*k.denominador()-k.numerador()*denominador_, denominador_*k.denominador());

  return subtrai;
}

Racional Racional::multiplicar(Racional k) const {
    Racional multiplica = Racional(numerador_*k.numerador(), denominador_*k.denominador());

  return multiplica;
}

Racional Racional::dividir(Racional k) const {

    Racional divisor=Racional(numerador_*k.denominador(), denominador_*k.numerador());
  return divisor;
}
void Racional::Simplificar() {
    if(mdc(numerador_, denominador_)!=1){
        numerador_= numerador_/mdc(numerador_, denominador_);
        denominador_= denominador_/mdc(numerador_, denominador_);
    }else{     
}
}