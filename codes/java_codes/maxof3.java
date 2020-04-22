import java.util.*;
class maxof3{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a number 1: ");
        int a = sc.nextInt();
        System.out.println("Enter a number 2: ");
        int b = sc.nextInt();
        System.out.println("Enter a number 3: ");
        int c = sc.nextInt();
        int m=a;
        if(b>a && b>c){
            m=b;
        }
        else if(c>a && c>b){
            m=c;
        }
        System.out.println("Maxium of the three is: "+m);
        sc.close();
    }
}