#include "Circulo.hpp"

#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_CTYPE,"Spanish");

    cout << endl << "\t CLASE PUNTO Y CLASE C�RCULO (hereda de punto) \a\a" << endl;

    cout << endl << "Conversi�n entre apuntadores de la clasen base y la clase derivada" << endl;

    Punto *punto=NULL,p(30,50);
    Circulo *circulo=NULL,c(2.7,120,89);

    cout << endl << "Punto p: " << p << endl << "C�rculo c: " << c << endl;

    // Trata a Circulo como un Punto (solamente ve la parte de la clase base)
    punto=&c; // asigna la direcci�n de Circulo a ptrPunto
    cout << endl << "C�rculo c (v�a *punto): " << *punto << endl;

    // Trata a Circulo como un Circulo (con alguna conversi�n)
    // convierte un apuntador de clase base en un apuntador de clase derivada
    circulo=static_cast<Circulo*>(punto);
    cout << endl << "C�rculo c (mediante *circulo):" << endl << *circulo
         << endl << "�rea de c (mediante circulo): "
         << circulo->area() << endl;

    // PELIGRO: trata a un Punto como un Circulo
    punto=&p; // asigna la direcci�n de Punto a ptrPunto

    // convierte el apuntador de clase base en un apuntador de clase derivada
    circulo=static_cast<Circulo*>(punto);
    cout << endl << "Punto p (mediante *circulo):" << endl << *circulo
         << endl <<"�rea del objeto circulo apunta a: "
         << circulo->area() << endl;

    return 0;
}
