#include "header.hpp"

int main()
{
    setlocale(LC_CTYPE,"Spanish");
    system("COLOR 5F");
    cout<<endl<<"\t\t REFERENCIAS"<<endl<<endl;

    int x=5;
    //declaraci�n de puntero
    int *px;
    px=&x;
    //declaraci�n de referencia
    int &rx=x;
    //cuando se crea una referencia se debe indicar a qui�n se hace referencia

    cout<<"contenido de x:\t\t\t"<<x<<endl;
    cout<<"direcci�n de x:\t\t\t"<<&x<<endl;

    cout<<"contenido de px:\t\t"<<px<<endl;
    cout<<"contenido del contenido de px:\t"<<*px<<endl;
    cout<<"direcci�n de px:\t\t"<<&px<<endl;

    cout<<"contenido de rx:\t\t"<<rx<<endl;
    cout<<"direcci�n de rx:\t\t"<<&rx<<endl;

    //los punteros en C++ mantienen compatibilidad con C
    //lo que se intenta es reemplazarlos usando referencias
    //aunque hay algunos casos en que se siguen usando solo los punteros

    //cualquier modificaci�n en una referencia o en la variable se ver� reflejada en ambas
    //la referencia NO ocupa memoria

    cout<<endl;
    x++;
    cout<<"pos x++: \t x: \t"<<x<<"\t rx: \t"<<rx<<endl;
    rx++;
    cout<<"pos rx++: \t x: \t"<<x<<"\t rx: \t"<<rx<<endl;

    //los compiladores necesitan una tabla de s�mbolos

    cout<<endl<<"PASAJE POR REFERENCIA"<<endl<<endl;

    int a=3,b=5;
    cout<<"Pre intercambios: \t\t\t a: \t"<<a<<"\t b: \t"<<b<<endl;
    intercambio_enteros_con_punteros(&a,&b);//invoco con direcciones pues la funci�n recibe punteros
    cout<<"Pos intercambio por punteros: \t\t a: \t"<<a<<"\t b: \t"<<b<<endl;
    intercambio_enteros_con_referencias(a,b);//invoco con valores pues la funci�n recibe referencias
    cout<<"Pos intercambio por referencias: \t a: \t"<<a<<"\t b: \t"<<b<<endl;

    cout<<endl<<"TRATAMIENTO DE UNA FECHA CON REFERENCIAS"<<endl;
    t_fecha fecha;
    cout<<"Ingrese dia:\t"<<endl;
    cin>>fecha.d;
    cout<<"Ingrese mes:\t"<<endl;
    cin>>fecha.m;
    cout<<"Ingrese a�o:\t"<<endl;
    cin>>fecha.a;

    cout<<endl<<"Fecha ingresada: \t";
    mostrar_fecha(fecha);

    cout<<endl<<"Fecha siguiente: \t";
    mostrar_fecha(sumar_1_dia(fecha));

    cout<<endl<<endl<<"\t\t Fin del programa...\a\a"<<endl;
    cin.get();
    return 0;
}
