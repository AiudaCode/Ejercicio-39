public class Ecuacion
{
    // se declaran los atributos privados
    private float a;
    private float b;
    private float c;
    
    public Ecuacion()
    {
        // al inicializar el constructor se definiran los valores iniciales de los atributos
        a = 0;
        b = 0;
        c = 0;
    }
    
    // metodos Setters y Getters de los atributos de la clase
    public void setA(float val)
    {
        a = val;
    }
    public float getA()
    {
        return a;
    }
    
    public void setB(float val)
    {
        b = val;
    }
    public float getB()
    {
        return b;
    }
    public void setC(float val)
    {
        c = val;
    }
    public float getC()
    {
        return c;
    }
    
    // solución 1
    public double resultadoUno()
    {
        // declaramos la variable que devuelve el resultado
        double solu;
        
        // ecuacion de segundo grado
        solu= (-b + (Math.sqrt((b*b)-(4*a*c))))  / (2*a);
        
        // retorna el resultado
        return solu;
                
    }
    
    // solución 2
    public double resultadoDos()
    {
        // declaramos la variable que devuelve el resultado
        double sol;
        
        // ecuacion de segundo grado
        sol= (-b - (Math.sqrt((b*b)-(4*a*c))) ) / (2*a);
        
        // retorna el resultado
        return sol;
    }
}