#include "NumeroTelefonico.hpp"

#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_CTYPE,"Spanish");

    cout << endl << "\t\t CLASE N�MERO TELEF�NICO" << endl;

    NumeroTelefonico numero;

    cout << endl << "Ingrese un n�mero telef�nico en formato (123) 1234-5678:" << endl << endl;
    cin >> numero;
    cout << endl << "El n�mero ingresado es: " << numero << endl << endl;

    return 0;
}
