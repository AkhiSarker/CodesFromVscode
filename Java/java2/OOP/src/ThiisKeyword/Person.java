
package ThiisKeyword;

public class Person {
    String name;
    int age;
    double height;
    
    Person(String name,int age){
        this.name = name;
        this.age = age;
    }
    
    Person(String name,int age,double height){
        this(name,age);
        this.height = height;
    }
    
    void display(){
        System.out.println("Name : "+name);
        System.out.println("Age : "+age);
        System.out.println("Height : "+height);
    }
   
}
