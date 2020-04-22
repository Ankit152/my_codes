import java.util.*;
class automorphic{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int n;
        boolean flag=true;
        System.out.println("Enter a number: ");
        n=sc.nextInt();
        int k=n*n;
        while(n>0){
            if((n%10)!=(k%10)){
                flag=false;
                break;
            }
            n/=10;
            k/=10;
        }
        if(flag) System.out.println("Automorphic Number !!!");
        else System.out.println("Not an Automorphic NUmber !!!");
        sc.close();
    }
}