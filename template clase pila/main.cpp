#include "Pila.hpp"

#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_CTYPE,"Spanish");

    cout << endl << "\t\t TEMPLATE CLASE PILA" << endl;

    Pila <int> pila_int;
    int nodo_int;

    cout << endl << "Se ha creado una pila de enteros" << endl;

    cout << endl << "La pila " << (pila_int.vacia()?"est�":"no est�") << " vac�a" << endl;

    cout << endl << "Apilando nodos:" << endl;
    while(!pila_int.llena())
    {
        cout << endl << "Apilar entero: \t";
        cin >> nodo_int;
        pila_int.apilar(nodo_int);
    }

    cout << endl << "La pila " << (pila_int.llena()?"est�":"no est�") << "llena" << endl;

    int tope_int;
    pila_int.get_tope(tope_int);

    cout << endl << "El nodo en el tope de la pila es: \t" << tope_int;

    cout << endl << "Desapilando nodos:" << endl;
    while(!pila_int.vacia())
    {
        pila_int.desapilar(nodo_int);
        cout << endl << "Nodo desapilado: \t" << nodo_int;
    }

    cout << endl << "La pila " << (pila_int.vacia()?"est�":"no est�") << " vac�a" << endl;

    return 0;
}
