#include <iostream>
#include <stdexcept>
#include <clocale>

using namespace std;

// throw a continuaci�n del prototipo de la funcion indica que esa funcion solo puede lanzar la excepci�n especificada
// si se lanzase otra excepci�n, se invocar�a autom�ticamente a la funcion terminate, y �sta invocar�a a la funci�n abort

void funcion_3() throw(runtime_error)
{
    cout << endl << "ejecutando funcion_3" << endl;

    throw runtime_error("runtime_error en funcion_3");

    cout << endl << "fin de la ejecuci�n de funcion_3" << endl;
}

void funcion_2() throw(runtime_error)
{
    cout << endl << "ejecutando funcion_2" << endl;

    funcion_3();

    cout << endl << "fin de la ejecuci�n de funcion_2" << endl;
}

void funcion_1() throw(runtime_error)
{
    cout << endl << "ejecutando funcion_1" << endl;

    funcion_2();

    cout << endl << "fin de la ejecuci�n de funcion_1" << endl;
}

int main()
{
    setlocale(LC_CTYPE,"Spanish");

    cout << endl << "DESENROLLAR LA PILA DE EJECUCI�N PARA CAPTURAR LA EXCEPCI�N" << endl;

    cout << endl << "ejecutando main" << endl;

    try
    {
        funcion_1();
    }
    catch(runtime_error e)
    {
        cout << endl << "Se ha capturado la excepci�n lanzada por funcion_3:" << endl << e.what() << endl;
    }

    cout << endl << "fin de la ejecuci�n de main" << endl;

    return 0;
}
