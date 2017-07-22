#include <iostream>
#include <cmath>
#include <clocale>

using namespace std;

const double PI=3.14159;

inline double area_circulo(const double radio)
{
    return PI*pow(radio,2);
}

int main()
{
    setlocale(LC_CTYPE,"Spanish");

    double radio;

    cout << endl << "\t\t �REA DE C�CULO" << endl;

    cout << endl << "Ingrese el radio del c�rculo: \t";
    cin >> radio;

    cout << endl << "El �rea del c�rculo es: \t" << area_circulo(radio) << endl;

    cin.get();
    return 0;
}

