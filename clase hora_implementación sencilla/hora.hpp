// Clase Hora.
#include <iostream>

using namespace std;

// Definici�n del tipo de dato abstracto (ADT) Hora
class Hora
{
public:

    Hora(); // constructor
    void estableceHora( int, int, int ); // establece hora, minuto, segundo
    void imprimeMilitar(); // imprime la hora en formato militar
    void imprimeEstandar(); // imprime la hora en formato est�ndar

private:

    int hora; // 0 - 23
    int minuto; // 0 - 59
    int segundo; // 0 - 59
}; // fin de la clase Hora
