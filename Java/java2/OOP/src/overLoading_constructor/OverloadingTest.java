
package overLoading_constructor;


public class OverloadingTest {
    public static void main(String[] args) {
        
        Teacher teacher1 = new Teacher();
        teacher1.displayInformation();
        
        Teacher teacher2 = new Teacher("akhi","female");
        teacher2.displayInformation();
        
        Teacher teacher3 = new Teacher("choity","female",2465);
        teacher3.displayInformation();
    }
    
}
