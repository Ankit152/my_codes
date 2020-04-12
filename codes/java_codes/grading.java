import java.util.*;
public class grading {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        char grade;
        System.out.println("Eneter Your grade: ");
        grade = sc.next().charAt(0);
        switch(grade){
            case 'A':
                System.out.println("Grade is A");
                break;
            case 'B':
                System.out.println("Grade is B");
                break;
            case 'C':
                System.out.println("Grade is C");
                break;
            case 'D':
                System.out.println("Grade is D");
                break;
            case 'E':
                System.out.println("Grade is E");
                break;
            case 'F':
                System.out.println("Grade is F");
                break;
            default:
                System.out.println("Grade should be between A-F only");
        }
    }
}