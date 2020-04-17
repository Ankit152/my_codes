import java.util.*;
public class primeSieve {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n;
        System.out.println("Enter the range of prime: ");
        n=sc.nextInt();
        prime(n);
    }
    public static void prime(int n){
        boolean[] p=new boolean[n+1];
        for(int i=2;i<=n;i++){
            p[i]=true;
        }
        p[0]=p[1]=false;
        for(int i=2;i*i<=n;i++){
            if(p[i]){
                for(int j=i*i;j<=n;j+=i){
                    p[j]=false;
                }
            }
        }
        System.out.println("The prime numbers are: ");
        for(int i=2;i<=n;i++){
            if(p[i]){
                System.out.print(i+" ");
            }
        }
    }
}