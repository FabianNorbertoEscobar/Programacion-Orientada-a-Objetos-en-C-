#ifndef NUMEROTELEFONICO_H
#define NUMEROTELEFONICO_H

#include <iostream>

using namespace std;

class NumeroTelefonico
{
private:
    char area[4];           // c�digo de �rea de 3 d�gitos y \0
    char intercambio[5];    // c�digo de intercambio de 4 d�gitos y \0
    char linea[5];          // c�digo de l�nea de 4 d�gitos y \0

public:
    //sobrecarga de los operadores de inserci�n y extracci�n de flujo
    friend ostream& operator << (ostream &stream,const NumeroTelefonico &numero);
    friend istream& operator >> (istream &stream,NumeroTelefonico &numero);
};

#endif // NUMEROTELEFONICO_H
