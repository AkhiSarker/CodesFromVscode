package chapter6;
class Box{
    double width;
    double height;
    double depth;
    //volume of a box
    void volume() {
        System.out.print("Volume is ");
        System.out.println(width * height * depth);
    }
}
public class Code2 {
    public static void main(String[] args) {
        Box mybox1 = new Box();
        Box mybox2 = new Box();
        
        //mybox1
        mybox1.width = 10;
        mybox1.height = 15;
        mybox1.depth = 20;
        //mybox2
        mybox2.width = 10;
        mybox2.height = 5;
        mybox2.depth = 15;
        
        //first box
        mybox1.volume();
        //second box
        mybox2.volume();
    }
}

