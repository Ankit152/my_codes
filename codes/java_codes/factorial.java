import java.util.*;
public class factorial {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        long n,i,fact=1;
        System.out.println("Enter the number for calculating factorial: ");
        n = sc.nextLong();
        for(i=2;i<=n;i++){
            fact*=i;
        }
        System.out.println("Factorial of "+n+" is: "+fact+" !!!");
    }
}