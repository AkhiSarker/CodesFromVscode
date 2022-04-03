
package chapter.pkg7;
class Box {
    double width;
    double height;
    double depth;

    Box(Box ob) { 
    width = ob.width;
    height = ob.height;
    depth = ob.depth;
    }

    Box(double w, double h, double d) {
    width = w;
    height = h;
    depth = d;
    }

    Box() {
    width = -1; // use -1 to indicate
    height = -1; // an uninitialized
    depth = -1; // box
    }
    
    Box(double len) {
    width = height = depth = len;
    }

    double volume() {
    return width * height * depth;
    }
}
public class Code5 {
    public static void main(String[] args) {
        Box mybox1 = new Box(10, 20, 15);
        Box mybox2 = new Box();
        Box mycube = new Box(7);
        Box myclone = new Box(mybox1); 
        double vol;
        
        vol = mybox1.volume();
        System.out.println("Volume of mybox1 is " + vol);
    
        vol = mybox2.volume();
        System.out.println("Volume of mybox2 is " + vol);

        vol = mycube.volume();
        System.out.println("Volume of cube is " + vol);

        vol = myclone.volume();
        System.out.println("Volume of clone is " + vol);
    }
    
}
