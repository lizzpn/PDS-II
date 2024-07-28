#include "racional.h"

#include <cmath>
#include <iostream>

int mdc(int ai,int bi ){
    int a = abs(ai), b = abs(bi);
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void Racional::Simplificar() {
  int maxdc = mdc(numerador_, denominador_);
  //std::cout << "mdc: " << maxdc << std::endl;
    if(maxdc!=1){
        //std::cout << numerador_ << "/" << denominador_ << " ---> ";
        numerador_= numerador_/maxdc;
        denominador_= denominador_/maxdc;
        //std::cout << numerador_ << "/" << denominador_ << std::endl;
    }
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
    Racional Oposto = Racional(numerador_*-1, denominador_);
    Oposto.Simplificar();
    return Oposto;
}

Racional Racional::somar(Racional k) const {
    Racional soma = Racional(numerador_*k.denominador()+k.numerador()*denominador_, denominador_*k.denominador());
    soma.Simplificar();
    return soma;
}

Racional Racional::subtrair(Racional k) const {
    Racional subtrai = Racional(numerador_*k.denominador()-k.numerador()*denominador_, denominador_*k.denominador());
    subtrai.Simplificar();
    return subtrai;
}

Racional Racional::multiplicar(Racional k) const {
    Racional multiplica = Racional(numerador_*k.numerador(), denominador_*k.denominador());
    multiplica.Simplificar();
    return multiplica;
}

Racional Racional::dividir(Racional k) const {
    Racional divisor=Racional(numerador_*k.denominador(), denominador_*k.numerador());
    divisor.Simplificar();
    return divisor;
}
