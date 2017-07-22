#include "Excepci�nDivisi�nEntreCero.hpp"

#include <iostream>
#include <clocale>

using namespace std;

double cociente(int numerador,int denominador);

int main()
{
    setlocale(LC_CTYPE,"Spanish");

    int numero_1,numero_2;
    double resultado;

    cout << endl << "EXCEPCI�N DIVISI�N ENTRE CERO" << endl;

    cout << endl << "Introduzca 2 enteros (fin de archivo para terminar): ";
    while(cin >> numero_1 >> numero_2)
    {
        try
        {
            resultado=cociente(numero_1,numero_2);
            // si try detecta que se lanza una excepci�n, es inmediatamente capturada y manipulada por catch
            cout << endl << "El cociente es: " << resultado << endl;
        }
        catch(ExcepcionDivisionEntreCero ex)// se indica tipo y nombre de manipulador de la Excepci�nDivisi�nEntreCero
        {
            cerr << endl << "Se ha capturado una excepci�n: \a\a" << ex.get_mensaje() << endl;
        }

        cout << endl << "Introduzca 2 enteros (fin de archivo para terminar): ";
    }

    cout << endl;
    return 0;
}

double cociente(int numerador,int denominador)
{
    if(denominador==0)
        throw ExcepcionDivisionEntreCero(); // throw lanza una excepci�n instanciando un objeto de las clase excepci�n

    return static_cast<double>(numerador)/denominador;
}
