package task;

class Member {

    String name;
    int age;
    String phone_number;
    String address;
    int salary;

    public void printSalary() {
        System.out.println("Salary :" + salary);
    }
}

class Employee extends Member {

    String specialization;
}

class Manager extends Member {

    String department;
}

public class Task_2 {

    public static void main(String[] args) {
        Employee ob1 = new Employee();

        ob1.name = "A";
        ob1.age = 1;
        ob1.phone_number = "017********";
        ob1.address = "sylhet";
        ob1.salary = 5000;

        System.out.println(ob1.name);
        System.out.println(ob1.age);
        System.out.println(ob1.phone_number);
        System.out.println(ob1.address);
        System.out.println(ob1.salary);

        Manager ob2 = new Manager();
        ob2.name = "B";
        ob2.age = 2;
        ob2.phone_number = "017********";
        ob2.address = "Sylhet";
        ob2.salary = 1000;

        System.out.println(ob2.name);
        System.out.println(ob2.age);
        System.out.println(ob2.phone_number);
        System.out.println(ob2.address);
        System.out.println(ob2.salary);

        ob1.printSalary();
        ob2.printSalary();
    }

}
