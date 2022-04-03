package chapter6;
class Box{
    double width;
    double height;
    double depth;
}
public class Code1 {
    public static void main(String[] args) {
        
        Box mybox = new Box();
        Box mybox1 = new Box();
        Box mybox2 = new Box();
        
        double vol;
        
        //mybox
        mybox.width = 10;
        mybox.height = 15;
        mybox.depth = 20;
        //mybox1
        mybox1.width = 10;
        mybox1.height = 5;
        mybox1.depth = 15;
        //mybox2
        mybox2.width = 3;
        mybox2.height = 6;
        mybox2.depth = 9;
        
        //Volume of first box
        vol = mybox.width * mybox.height * mybox.depth;
        System.out.println("Volume is " + vol);
        
        //Volume of second box
        vol = mybox1.width * mybox1.height * mybox1.depth;
        System.out.println("Volume is " + vol);
        
        //Volume of third box
        vol = mybox2.width * mybox2.height * mybox2.depth;
        System.out.println("Volume is " + vol);
    }
}
