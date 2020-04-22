import java.util.*;
class functionFact {
    public static void main(final String[] args) {
        final Scanner sc = new Scanner(System.in);
        long n;
        System.out.println("Enter the number for factorial: ");
        n = sc.nextLong();
        long fact = factorial(n);
        System.out.println("Fcatorial of "+n+" is: "+fact+"!!!");
        sc.close();
    }
    private static long factorial(long n) {
        long fact = 1;
        for(long i=2;i<=n;i++){
            fact*=i;
        }
        return fact;
    }
}