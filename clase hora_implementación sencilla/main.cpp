#include <iostream>
#include <clocale>

#include "hora.hpp"

using namespace std;

// Controlador para probar la clase simple Hora
int main()
{
    setlocale(LC_CTYPE,"Spanish");

    Hora h; // instancia el objeto h de la clase Hora

    cout << endl << "\t\t CLASE HORA" << endl;

    cout << endl << "La hora militar inicial es ";
    h.imprimeMilitar();
    cout << endl << "La hora est�ndar inicial es ";
    h.imprimeEstandar();

    h.estableceHora( 13, 27, 6 );
    cout << endl << endl << "La hora militar despu�s de estableceHora es ";
    h.imprimeMilitar();
    cout << endl << "La hora est�ndar despu�s de estableceHora es ";
    h.imprimeEstandar();

    h.estableceHora( 99, 99, 99 ); // intenta establecer valores inv�lidos
    cout << endl << endl << "Despu�s de intentar establecer valores inv�lidos:"
         << endl << "Hora militar:";
    h.imprimeMilitar();
    cout << endl << "Hora est�ndar:";
    h.imprimeEstandar();
    cout << endl;
    return 0;
} // fin de la funci�n main
