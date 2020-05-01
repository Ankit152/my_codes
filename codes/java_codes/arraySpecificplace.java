import java.util.*;
class arraySpecificplace {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of the array: ");
        int n = sc.nextInt();
        int[] arr = new int[n];
        boolean[] check = new boolean[n];
        for (int i = 0; i < n; i++) {
            check[i] = false;
        }
        int count = 0;
        while (count < n) {
            System.out.println("Enter the position: ");
            final int pos = sc.nextInt();
            if(check[pos]==false){
                System.out.println("Enter the value: ");
                arr[pos]=sc.nextInt();
                check[pos]=true;
                count++;
            }
            else{
                System.out.println("The position not valid!!!");
            }
        }
        System.out.print("The array elements are: ");
        for(int i=0;i<n;i++){
            System.out.print(arr[i]+" ");
        }
        sc.close();
    }
}