
package SuperKeyword2;


public class Phone extends Vivo {
    
    int range;
    
   Phone(String c,double w, int r){
       super(c,w);
        range = r;
   }

    Phone() {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }
    @Override
     void display(){
        super.display();
        System.out.println("Renge : "+range);
    }
}
