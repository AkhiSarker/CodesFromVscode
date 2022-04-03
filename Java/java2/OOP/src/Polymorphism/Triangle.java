
package Polymorphism;

public class Triangle extends shape{
     //area
    double length, width;
    
    Triangle(double length , double width){
        this.length = length;
        this.width = width;
    }

    Triangle() {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }
    
    @Override
     double area(){
          System.out.print("Area for Triangle : ");
        return 0.5* length * width;
    }
}
