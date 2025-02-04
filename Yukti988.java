import java.util.ArrayList;
class Student {
    String name;
    int age;
    String rollNumber;
    public Student(String name, int age, String rollNumber) {
        this.name = name;
        this.age = age;
        this.rollNumber = rollNumber;
    }
    void details() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("Roll Number: " + rollNumber);
    }
}
public class Yukti988 {
    public static void main(String[] args) {
        ArrayList<Student> students = new ArrayList<>();
        Student student1 = new Student("Alice", 20, "101");
        Student student2 = new Student("Bob", 22, "102");
        students.add(student1);
        students.add(student2);
        for (Student student : students) {
            student.details();
            System.out.println("");
        }
    }
}
