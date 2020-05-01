import java.util.*;
class onedTwod {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number of array elements: ");
        int n=sc.nextInt();
        int[] arr=new int[n];
        System.out.println("Enter the array elements: ");
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        System.out.println("Enter the number of rows: ");
        int row=sc.nextInt();
        System.out.println("Enter the number of columns: ");
        int col=sc.nextInt();
        int[][] mat=new int[row][col];
        if(n!=row*col){
            System.out.println("Not Possible!!!");
        }
        else{
            int k=0;
            for(int i=0;i<row;i++){
                for(int j=0;j<col;j++){
                    mat[i][j]=arr[k++];
                }
            }
            System.out.println("The array elements are:");
            for(int i=0;i<row;i++){
                for(int j=0;j<col;j++){
                    System.out.print(mat[i][j]+" ");
                }
                System.out.println();
            }
        }
        sc.close();
    }
}