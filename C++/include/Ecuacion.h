#ifndef ECUACION_H
#define ECUACION_H


class Ecuacion
{
    public:
        Ecuacion();
        virtual ~Ecuacion();
        // se declaran los metodos publicos
        void setA(float val);
        float getA();
        void setB(float val);
        float getB();
        void setC(float val);
        float getC();
        float resultadoUno();
        float resultadoDos();
    protected:

    private:
        // se declaran los atributos privados
        float a;
        float b;
        float c;
};

#endif // ECUACION_H
