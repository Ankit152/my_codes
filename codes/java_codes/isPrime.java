import java.util.*;
import java.lang.Math;
class isPrime{
    public static void main(final String[] args){
        final Scanner sc = new Scanner(System.in);
        long n;
		long i;
        boolean flag=true;
        System.out.println("Enter the number: ");
        n=sc.nextLong();
        if(n<2){
            flag=false;
        }
        else{
            for(i=2;i<=Math.sqrt(n);i++){
                if(n%i==0){
                    flag=false;
                    break;
                }
            }
        }
        if(flag){
            System.out.println(n+" is a prime number!!!");
        }
        else{
            System.out.println(n+" is not a prime number!!!");
        }
        sc.close();
    }
}