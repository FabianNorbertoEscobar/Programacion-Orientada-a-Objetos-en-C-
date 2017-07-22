#include <iostream>
#include <exception>
#include <clocale>

using namespace std;

void lanzar_excepcion();

int main()
{
    setlocale(LC_CTYPE,"Spanish");

    cout << endl << "RELANZAMIENTO DE EXCEPCI�N" << endl;

    try
    {
        lanzar_excepcion();
    }
    catch(exception e)
    {
        cout << endl << "Excepci�n capturada y manipulada en el main \a\a" << endl;
    }

    cout << endl << "Contin�a el control de la ejecuci�n del programa luego del bloque try/catch" << endl;

    return 0;
}

void lanzar_excepcion()
{
    try
    {
        cout << endl << "Funci�n lanzar_excepcion en ejecuci�n" << endl;
        throw exception();  // lanza la excepci�n
    }
    catch(exception e)
    {
        cout << endl << "Excepci�n capturada y manipulada en la funci�n lanzar_excepcion \a\a" << endl;
        throw;  // relanza la excepci�n
    }
}
