#include "header.hpp"

int main()
{
    setlocale(LC_CTYPE,"Spanish");
    system("COLOR 5F");

    cout<<endl<<"\t\t FUNCIONES INLINE"<<endl<<endl;

    cout<<"Las funciones inline sugieren al compilador una optimizaci�n"<<endl;
    cout<<"El compilador es quien decide si toma el consejo o no"<<endl;
    cout<<"Las funciones inline son h�bridos, deben ser cortas en cuanto a c�digo"<<endl;
    cout<<"para evitar generar un ejecutable de tama�o considerable"<<endl;
    cout<<"En vez de generarsen una porci�n de c�digo se reemplazan como macros"<<endl;
    cout<<"Esto ocurre en tiempo de compilaci�n"<<endl;
    cout<<"Ha diferencia de las macro hacen verificaci�n de tipo"<<endl;
    cout<<"Incrementan el program counter y apilan en el stack pointer"<<endl;
    cout<<"Las funciones inline se pueden depurar"<<endl;

    cout<<"Ejemplo:"<<endl;
    char c='f';
    cout<<endl<<"Caracter: \t"<<c<<"\t ---a may�scula---> \t"<<a_mayuscula(c)<<endl;

    cout<<endl<<endl<<"\t\t\t\t\t Fin del programa...\a\a"<<endl<<endl;
    cin.get();
    return 0;
}
