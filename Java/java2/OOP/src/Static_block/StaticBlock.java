
package Static_block;


public class StaticBlock {
    
    static int id;
    static String name;
   
    static{
     id = 101;
     name = "akhi";
}
    
    static void display(){
        System.out.println("Id : "+id);
        System.out.println("Name : "+name);
    }
    
    public static void main(String[] args) {
         StaticBlock.display();
    }
    
}


