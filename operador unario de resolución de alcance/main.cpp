#include <iostream>

using std::cout;
using std::endl;
using std::ios;

#include <iomanip>

using std::setprecision;
using std::setiosflags;
using std::setw;

const double PI = 3.14159265358979; //variable global

int main()
{
    const float PI = static_cast< float >( ::PI );  //variable local --> casteo est�tico a punto flotante

    cout << endl << "OPERADOR UNARIO DE RESOLUCI�N DE ALCANCE" << endl << endl;

    cout << setprecision( 20 )      // fijo la presici�n con 20 d�gitos a la derecha de punto flotante
         << " Valor local float de PI = " << PI
         << "\nValor global double de PI = " << ::PI << endl;

    cout << setw( 28 ) << "Valor float local de PI = "  //fijo el ancho de campo con 28 caracteres
         << setiosflags( ios::fixed | ios::showpoint ) // se imprime como un valor de punto fijo pero con punto decimal y presici�n
                                                        // especificada por el otro argumento del manipulador de flujo
         << setprecision( 10 ) << PI << endl;   //cambio la presici�n

    return 0;
} // fin de la funci�n main

