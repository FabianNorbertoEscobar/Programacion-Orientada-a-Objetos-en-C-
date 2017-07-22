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

    Rectangulo rectangulo2(0,0,2,0,2,4,0,4);
    cout << endl << " RECT�NGULO 2" << endl;
    cout << endl << " Longitud: " << rectangulo2.longitud() << "\t Ancho: " << rectangulo2.ancho();
    cout << endl << " Per�metro: " << rectangulo2.perimetro() << "\t �rea: " << rectangulo2.area();
    cout << endl << " El rect�ngulo " << ((rectangulo2.cuadrado())?"es":"no es") << " un cuadrado" << endl;

    cin.get();
    return 0;
}
