
package Polymorphism;

public class Rectangle extends shape{
    //area
    double length, width;
    
    Rectangle( double length , double width){
        this.length = length;
        this.width = width;
    }

    Rectangle() {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }
    @Override
    double area(){
         System.out.print("Area for Rectangle : ");
        return length * width;
    }
}
