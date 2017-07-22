/*
ARQUITECTURA DE COMPUTADORAS

TRABAJO PR�CTICO 6: UNIDAD CENTRAL DE PROCESO
PROGRAMACI�N EN LENGUAJE SIMB�LICO - PROGRAMACI�N AVANZADA

INTRODUCCI�N AL PROBLEMA
Una variable es una posici�n de memoria que puede ser le�da y escrita. Desde un lenguaje de alto nivel se le indica al compilador
el tipo de dato al que pertenece una variable. El tipo de dato indica el tama�o a reservar, es decir, la cantidad de bits que debe ocupar
la variable y c�mo se decodificar� el patr�n de bits hallado en esa posici�n de memoria. La misma palabra binaria tiene significado diferente
dependiendo del tipo de dato de la variable. Para la electr�nica son solo se�ales representadas por ceros y unos, es el programador
el que asigna un sentido especial a cada palabra de ceros y unos.

OBJETIVOS
Relacionar el concepto de tipo de dato en alto nivel con bajo nivel. Evidenciar los efectos de intentar sobrepasar la capacidad en bits
de una variable declarada de un tipo. Afirmar el concepto de overflow en la representaci�n interna de n�meros enteros y caracteres.

ENUNCIADOS
Dado el programa en C++ que se adjunta, realizar su equivalente en lenguaje simb�lico y lenguaje de m�quina del HC11(operaciones y asignaciones,
no entradas y salidas). Observar las salidas de C++ y que los �nicos mensajes del compilador se refieren al warning
�Conversion may lose significant digits�. Explicar y mostrar la raz�n de las salidas obtenidas.
*/

#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

//Ejemplos de overflow

int main()
{
    short i ;
    int ii ;
    long l ;
    float f ;
    char c ;
    cout << "Presionar cualquier tecla para avanzar" << endl ;
    getch() ;
    i = 32767 ;
    i++ ;
    cout << endl << "32767 + 1 como short da " << i << endl ;
    getch() ;
    ii = 32767 ;
    ii++ ;
    cout << endl << "32767 + 1 como int da " << ii << endl ;
    getch() ;
    ii = pow(2,31) ;
    ii++ ;
    cout << endl << "2^31 como int da " << ii << endl ;
    getch() ;
    l = pow(2,31) ;
    l++ ;
    cout << endl << "2^31 como long da " << l << endl ;
    getch() ;
    i = -32768 ;
    i-- ;
    cout << endl << "-32768 - 1 como short da " << i << endl ;
    getch() ;
    i = 45000 ;
    cout << endl << "i = 45000 como short da " << i << endl ;
    getch() ;
    i = 32000 + 25000 ;
    f = i ;
    cout << endl << "32000 + 25000 como entero ==> " << i << endl ;
    cout << endl << "32000 + 25000 como real ==> " << f << endl ;
    getch() ;
    f = 32000 + 25000 ;
    i = f ;
    cout << endl << "32000 + 25000 como entero ==> " << i << endl ;
    cout << endl << "32000 + 25000 como real ==> " << f << endl ;
    getch() ;
    c = 'A' ;
    cout << endl << "la A como char da " << c << endl ;
    getch() ;
    c = 65 ;
    cout << endl << "c = 65 como char da " << c << endl ;
    c = 321;
    cout << endl << "c = 321 como char da " << c << endl ;
    c = -191 ;
    cout << endl << "c = -191 como char da " << c << endl ;
    c = 128 ;
    cout << endl << "c = 128 como char da " << c << endl ;
    c = -128 ;
    cout << endl << "c = -128 como char da " << c << endl ;
    cout << endl << "Tama" <<char(164) <<"o de short, int, long, float, char = "
         << sizeof(short) << ", "
         << sizeof(int) << ", "
         << sizeof(long) << ", "
         << sizeof(float) << ", "
         << sizeof(char) << " respectivamente " << endl ;
    cout << endl << "Presionar cualquier tecla para terminar" << endl ;
    getch() ;
    return 0;
}
