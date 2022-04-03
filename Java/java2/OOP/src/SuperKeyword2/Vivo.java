
package SuperKeyword2;

public class Vivo {
    String color;
    double weight;
    
    Vivo(String c,double w){
        color = c;
        weight = w;
    }

    Vivo() {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }
    
    void display(){
        System.out.println("Color : "+color);
        System.out.println("Weight : "+weight);
    }
}
