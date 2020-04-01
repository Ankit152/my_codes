import java.util.*;
class seriesSum{
    public static void main(String args[]) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int k=n/2;
        int s1=n*(n+1)/2;
        int s2=4*k*(k+1)/2;
        System.out.println(s1-s2);
    }
}