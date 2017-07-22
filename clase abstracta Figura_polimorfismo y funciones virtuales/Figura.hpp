#ifndef FIGURA_H
#define FIGURA_H

// clase abstracta - clase base de este ejemplo de programaci�n polim�rfica

// las clases son abstractas cuando contienen m�todos virtuales puros

// no se pueden instanciar objetos de una clase abstracta -> solamente son clase base para las clases derivadas de la jerarqu�a polim�rfica

class Figura
{
public:
    // funciones virtuales
    virtual double area()const;
    virtual double volumen()const;

    // funciones virtuales puras sustituidas en clases derivadas --> las funciones son virtuales puras cuando son virtuales y se igualan a cero
    virtual void imprime_nombre_figura()const=0;
    virtual void imprime()const=0;
};

#endif // FIGURA_H

// las funciones deben declararse como virtuales solamente en la definici�n de la clase, de igual modo que las amigas y est�ticas

/*
Figura tiene dos funciones
virtuales puras, imprimeNombreFigura e imprime, de tal modo que es una clase base abstracta. Figura
contiene otras dos funciones virtuales, area y volumen, cada una de las cuales tiene una implementaci�n
predeterminada que devuelve un valor de cero. Punto hereda estas implementaciones de Figura. Esto tiene
sentido, ya que el �rea y el volumen de un punto son cero. Circulo hereda la funci�n volumen de Punto,
pero proporciona su propia implementaci�n para la funci�n area. Cilindro proporciona sus propias implementaciones
tanto para la funci�n area como para la funci�n volumen.
*/

/*
Cuando C++ compila una clase que tiene una o m�s funciones virtuales, �ste construye una tabla de funciones
virtuales (vtable) para esa clase. El programa en ejecuci�n utiliza la vtable para seleccionar las implementaciones
de la funci�n apropiada, cada vez que va a ejecutarse una funci�n virtual de esa clase.
*/
