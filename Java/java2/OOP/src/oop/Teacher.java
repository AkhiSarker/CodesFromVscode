package oop;

public class Teacher {

    String name, gender;
    int phone;
    
    //Default constructor
    Teacher(){
        System.out.println("No value");
    }
    
    //Parametrized constructor
    Teacher(String n,String g,int ph){
        name = n;
        gender = g;
        phone = ph;
            
}
    
    void displayInformation(){

        System.out.println("Name : " +name);
        System.out.println("Gender : " +gender);
        System.out.println("Phone : " +phone);
        System.out.println("\n");
}

}


