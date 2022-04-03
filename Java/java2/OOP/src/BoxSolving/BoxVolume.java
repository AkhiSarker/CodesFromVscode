
package BoxSolving;


public class BoxVolume {
    public static void main(String[] args) {
        BoxDemo box1 = new BoxDemo(10,10,10);
        BoxDemo box2 = new BoxDemo(20,30,40);
        BoxDemo box3 = new BoxDemo(10,40,10);
        
        box1.displayVol();
        box2.displayVol();
        box3.displayVol();
    }
    
}
