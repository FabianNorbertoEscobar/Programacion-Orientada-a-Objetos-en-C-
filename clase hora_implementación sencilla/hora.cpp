#include "hora.hpp"

#include <iostream>

using namespace std;

// El constructor Hora inicializa en cero a cada dato miembro.
// Garantiza que todos los objetos de Hora inician en un estado consistente.
Hora::Hora()
{
    hora = minuto = segundo = 0;
}

// Establece un nuevo valor de Hora por medio de la hora militar. Realiza verificaciones
// de validaci�n de los valores de los datos. Establece en cero a los valores inv�lidos.
void Hora::estableceHora( int h, int m, int s )
{
    hora = ( h >= 0 && h < 24 ) ? h : 0;
    minuto = ( m >= 0 && m < 60 ) ? m : 0;
    segundo = ( s >= 0 && s < 60 ) ? s : 0;
} // fin de la funci�n estableceHora

// Imprime Hora en formato militar
void Hora::imprimeMilitar()
{
    cout << ( hora < 10 ? "0" : "" ) << hora << ":"
         << ( minuto < 10 ? "0" : "" ) << minuto;
} // fin de la funci�n imprimeMilitar

// Imprime Hora en formato est�ndar
void Hora::imprimeEstandar()
{
    cout << ( ( hora == 0 || hora == 12 ) ? 12 : hora % 12 )
         << ":" << ( minuto < 10 ? "0" : "" ) << minuto
         << ":" << ( segundo < 10 ? "0" : "" ) << segundo
         << ( hora < 12 ? " AM" : " PM" );
} // fin de la funci�n imprimeEstandar
