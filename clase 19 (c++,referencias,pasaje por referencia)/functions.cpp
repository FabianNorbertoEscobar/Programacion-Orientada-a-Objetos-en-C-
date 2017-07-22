#include "header.hpp"

void intercambio_enteros_con_punteros(int *e1,int *e2)
{
    int aux=*e1;
    *e1=*e2;
    *e2=aux;
}
//en estta funci�n recibo la direcci�n y declaro un puntero a esa direcci�n

void intercambio_enteros_con_referencias(int &e1,int &e2)
{
    int aux=e1;
    e1=e2;
    e2=aux;
}
//en esta funci�n recibo la variable y declaro una referencia a esa variable

//las referencias tambi�n pueden ser constantes
void mostrar_fecha(const t_fecha &f)
{
    cout<<"Fecha: \t"<<f.d<<"/"<<f.m<<"/"<<f.a<<endl;
}
//para acceder a los miembros de una estructura se accede con punto, como si estuviese usando la variable struct original

t_fecha &sumar_1_dia(const t_fecha &f)
{
    t_fecha sig;
    sig=f;
    sig.d++;
    return sig;
}
//NO TIENE SENTIDO RETORNAR UNA REFERENCIA PORQUE SE ESTAR�A RETORNANDO UNA REFERENCIA A UNA VARIBLE LOCAL
//QUE OBVIAMENTE DESAPARECER�A DE CUANDO TERMINA LA EJECUCI�N DE LA FUNCI�N
//SI BIEN EN ESTE CASO FUNCIONA Y SIRVE PARA CONCATENAR, SUELE NO FUNCIONAR Y ES UN ERROR DE CONCEPTO
//NO HACERLO-->tira warning
