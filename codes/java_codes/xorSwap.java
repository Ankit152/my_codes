import java.util.*;
class xorSwap {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        long a,b;
        System.out.println("Enter the 1st element: ");
        a=sc.nextLong();
        System.out.println("Enter the 2nd element: ");
        b=sc.nextLong();
        a=a^b;
        b=a^b;
        a=a^b;
        System.out.println("The elements after swap are "+a+" and "+b);
        sc.close();
    }
}