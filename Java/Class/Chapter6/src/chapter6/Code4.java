/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package chapter6;
class Box {
    double width;
    double height;
    double depth;
    //  volume
    double volume() {
    return width * height * depth;
    }
    void setDim(double w, double h, double d) {
    width = w;
    height = h;
    depth = d;
    }
}
public class Code4 {
    public static void main(String[] args) {
        Box mybox1 = new Box();
        Box mybox2 = new Box();
        
        double vol;
        
        mybox1.setDim(10, 20, 15);
        mybox2.setDim(3, 6, 9);
        
        // first box
        vol = mybox1.volume();
        System.out.println("Volume is " + vol);
            // second box
        vol = mybox2.volume();
        System.out.println("Volume is " + vol);
    }
    
}
