#include <iostream>
#include <clocale>

using std::cout;
using std::endl;

int triplePorValor( int );
void triplePorReferencia( int & );

int main()
{
    setlocale(LC_CTYPE,"Spanish");

    cout << endl << "\t\t PASAJE DE PAR�METROS POR VALOR Y POR REFERENCIA" << endl << endl;

    int x = 2, z = 4;

    cout << "x = " << x << " antes de triplePorValor" << endl
         << "Valor devuelto por triplePorValor: "
         << triplePorValor( x ) << endl
         << "x = " << x << " despu�s de triplePorValor\n" << endl;

    cout << "z = " << z << " despu�s de triplePorReferencia" << endl;
    triplePorReferencia( z );
    cout << "z = " << z << " despu�s de triplePorReferencia" << endl;

    return 0;
} // fin de la funci�n main

int triplePorValor( int a )
{
    return a = a * a *a; // argumento de la llamada no modificada
} // fin de la funci�n triplePorValor

void triplePorReferencia( int &cRef )
{
    cRef = cRef * cRef * cRef; // argumento de la llamada modificada
} // fin de la funci�n triplePorReferencia
