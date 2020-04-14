import java.util.*;
public class factFuncRec {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n,fact;
        System.out.println("Enter the number for factorial: ");
        n = sc.nextLong();
        fact = factorial(n);    
        System.out.println("The factorial of "+n+" is "+fact+"!!!");
    }
    public static long factorial(long n){
        if(n<=1){
            return 1;
        }
        return n*factorial(n-1);
    }
}