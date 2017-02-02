#include <iostream>
#include "Ecuacion.h"

using namespace std;

int main(void)
{
    float v1,v2,v3;

    Ecuacion *obj = new Ecuacion();

    cout << "====ECUACION DE SEGUNDO GRADO===" << endl << endl;


    // se pide el valor de A
    cout << "Digite el valor de A" << endl;
    cout << ">> ";
    cin >> v1;
    // se encapsula la variable v1
    obj->setA(v1);
    cout << endl;
    // se pide el valor de B
    cout << "Digite el valor de B" << endl;
    cout << ">> ";
    cin >> v2;
    // se encapsula la variable v2
    obj->setB(v2);
    cout << endl;
    // se pide el valor de C
    cout << "Digite el valor de C" << endl;
    cout << ">> ";
    cin >> v3;
    // se encapsula la variable v3
    obj->setC(v3);
    cout << endl;
    // se muestran las soluciones
    cout<< "Solucion 1:  " << obj->resultadoUno() << endl;
    cout<< "Solucion 2:  " << obj->resultadoDos() << endl;

}
