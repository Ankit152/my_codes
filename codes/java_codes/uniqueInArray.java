import java.util.*;
class uniqueInArray {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the size of the array: ");
        int n=sc.nextInt();
        int[] a=new int[n];
        int[] b=new int[n];
        System.out.println("Enter the 1st array elements: ");
        for(int i=0;i<n;i++){
            a[i]=sc.nextInt();
        }
        System.out.println("Enter the 2nd array elements: ");
        for(int i=0;i<n;i++){
            b[i]=sc.nextInt();
        }
        System.out.println("The unique elements are: ");
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(a[i]==b[j]){
                    System.out.print(a[i]+" ");
                }
            }
        }
        sc.close();
    }
}