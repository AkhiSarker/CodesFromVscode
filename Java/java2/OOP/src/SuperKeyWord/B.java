
package SuperKeyWord;


public class B extends A{
    //int num = 5;
    int num = 10;
    
    void display(){
        System.out.println(super.num);
    }
    
    @Override
    void display1(){
        message();
        super.display1();
        System.out.println("Inside B class");
    }
}
