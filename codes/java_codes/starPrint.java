import java.util.*;
class starPrint{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the number: ");
        int n=sc.nextInt();
        System.out.println("The required star pattern is");
        for(int i=1;i<=n;i++){
            for(int j=n;j>0;j--){
                if(j>i){
                    System.out.print("  ");
                }
                else{
                    System.out.print(" *  ");
                }
            }
            System.out.println();
        }
        sc.close();
    }
}