
package BoxSolving;


public class BoxDemo {
    double width;
    double height;
    double depth;
    
    BoxDemo(double w,double h,double d){
     width = w;
     height = h;
     depth  = d;    
    }
    void displayVol(){
        
        double vol  = height * width * depth;
         System.out.println("Volume : "+vol);
    }
}
