import java.util.*;
class compare2 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int a,b;
        System.out.println("Enter the 1st number: ");
        a = sc.newInt();
        System.out.println("Enter the 2nd number: ");
        b = sc.nextInt();
        if(a>b){
            System.out.println(a+" is greater than "+b+"!!!");
        }
        else if(b>a){
            System.out.println(b+" is greater than "+a+"!!!");
        }
        else{
            System.out.println(a+" and "+b+" are equal!!!");
        }
        sc.close();
    }
}