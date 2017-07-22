#include "incremento.hpp"

#include <iostream>

using namespace std;

// cuando uso un inicializador, se identifica autom�ticamente al atributo
// colocar this para diferenciarlo del par�metro es un error de sintaxis
Incremento::Incremento(int cuenta,int incremento):incremento(incremento)
{
    this->cuenta=cuenta;
}

void Incremento::incrementar()
{
    cuenta+=incremento;
}

void Incremento::imprimir()const
{
    cout << endl << "Cuenta: " << cuenta << "\t Incremento: " << incremento << endl;
}
