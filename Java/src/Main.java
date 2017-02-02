
import javax.swing.JOptionPane;

public class Main
{
    public static void main(String[] args)
    {
        // se crea un objeto de la clase Convertir (Instanciaciación)
        Ecuacion obj = new Ecuacion();
        // declaramos las variables que guardan los valores a,b,c
        float a,b,c;
        // se pide el valor de A
        a = Float.parseFloat(JOptionPane.showInputDialog("Digite valor de A"));
        // se encapsula la variable a
        obj.setA(a);
        while(obj.getA() == 0)
        {
            a = Float.parseFloat(JOptionPane.showInputDialog("Digite valor de A"));
            obj.setA(a);
        }
        
        // se pide el valor de B
        b = Float.parseFloat(JOptionPane.showInputDialog("digite valor de B"));
        // se encapsula la variable a
        obj.setB(b);
        
        // se pide el valor de C
        c = Float.parseFloat(JOptionPane.showInputDialog("Digite valor de C"));
        // se encapsula la variable c
        obj.setC(c);

        // se muestran las soluciones
        JOptionPane.showMessageDialog(null,"Resultado 1:  " + obj.resultadoUno() + "\n" + "Resultado 2:  " + obj.resultadoDos());
    }
}