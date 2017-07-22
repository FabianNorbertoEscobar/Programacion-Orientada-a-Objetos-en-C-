#include "vendedor.hpp"

#include <iostream>
#include <iomanip>

using namespace std;

// La funci�n constructor inicializa el arreglo
Vendedor::Vendedor()
{
    for(int mes=0; mes<12; mes++)
        ventas[mes]=0.0;
} // fin del constructor Vendedor

// Funci�n para obtener 12 cifras de ventas del usuario
// desde el teclado
void Vendedor::obtieneVentasDelUsuario()
{
    double montoVentas;

    for(int mes=1; mes<=12; mes++)
    {
        cout << "Introduzca el monto de las ventas del mes " << mes << ":\t";
        cin >> montoVentas;
        estableceVentas(mes,montoVentas);
    } // fin de for
} // fin de la funci�n obtieneVentasDelUsuario

// Funci�n para establecer una de 12 cifras de ventas mensuales.
// Observe que el valor del mes debe ser de 0 a 11.
void Vendedor::estableceVentas(int mes,double monto)
{
    if (mes>=1&&mes<=12&&monto>0)
        ventas[mes-1]=monto; // ajusta los sub�ndices 0-11
    else
        cout << endl << "Mes o monto de ventas no v�lido" << endl;
} // fin de la funci�n estableceVentas

// Imprime el total de las ventas anuales
void Vendedor::imprimeVentasAnuales()
{
    cout << setprecision( 2 )
         << setiosflags( ios::fixed | ios::showpoint )
         << endl << "El total de las ventas anuales es: $" << totalVentasAnuales() << endl;
} // fin de la funci�n imprimeVentasAnuales

// Funci�n de utilidad privada para totalizar las ventas anuales
double Vendedor::totalVentasAnuales()
{
    double total=0.0;

    for(int mes=0; mes<12; mes++ )
        total+=ventas[mes];

    return total;
} // fin de la funci�n totalVentasAnuales
