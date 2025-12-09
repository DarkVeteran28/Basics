import java.util.*;
public class scanner {
    public static void main(String args[]){
        int age;
        Scanner scan=new Scanner(System.in);
        System.out.print("Enter your name: ");
        String name;
        name= scan.nextLine();
        System.out.println("ENter your age: ");
        age= scan.nextInt();
        System.out.println("Hello "+name+" You are "+age+" old.");
        scan.close();
    }
    
}
