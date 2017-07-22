#include <iostream>
#include <iomanip>
#include <clocale>

#include "rect�ngulo.hpp"

using namespace std;

int main()
{
    setlocale(LC_CTYPE,"Spanish");

    cout << endl << "\t CLASE RECT�NGULO" << endl;

    Rectangulo rectangulo1;
    cout << endl << " RECT�NGULO 1" << endl;
    cout << endl << " Longitud: " << rectangulo1.longitud() << "\t Ancho: " << rectangulo1.ancho();
    cout << endl << " Per�metro: " << rectangulo1.perimetro() << "\t �rea: " << rectangulo1.area();
    cout << endl << " El rect�ngulo " << ((rectangulo1.cuadrado())?"es":"no es") << " un cuadrado" << endl;
    cout << endl << " Dibujo del rect�ngulo 1:";
    rectangulo1.dibujar();

    rectangulo1.set_caracter_contorno('X');
    rectangulo1.set_caracter_relleno('O');
    cout << endl << " Se han cambiado los caracteres de contorno y relleno" << endl;
    cout << endl << " Dibujo del rect�ngulo 1:";
    rectangulo1.dibujar();

    cin.get();
    return 0;
}

