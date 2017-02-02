#include "Ecuacion.h"s
#include <math.h>

Ecuacion::Ecuacion()
{
    // al inicializar el constructor se definiran los valores iniciales de los atributos
    a = 0;
    b = 0;
    c = 0;
}

Ecuacion::~Ecuacion()
{
    //dtor
}

// metodos Setters y Getters de los atributos de la clase
void Ecuacion::setA(float val)
{
    //IGUALAMOS EL PARAMETRO A LA VARIABLE (A)
    a = val;
}
float Ecuacion::getA()
{
    return a;
}
void Ecuacion::setB(float val)
{
    b = val;
}
float Ecuacion::getB()
{
    return b;
}
void Ecuacion::setC(float val)
{
    c = val;
}
float Ecuacion::getC()
{
    return c;
}

// solucion 1
float Ecuacion::resultadoUno()
{
    float res=0;
    res = (-getB() + (sqrt(pow(getB(),2)-(4 *getA()*getC()) ))) / (2*getA());
    return res;
}

// solucion 2
float Ecuacion::resultadoDos()
{
    float res=0;
    res = (-getB() - (sqrt(pow(getB(),2)-(4 * getA() * getC())))) / (2*getA());
    return res;
}
