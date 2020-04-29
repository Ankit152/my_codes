import java.util.*;
class twoDarray_mult {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the row of the 2D array: ");
        int m=sc.nextInt();
        int[][] a=new int[m][m];
        int[][] b=new int[m][m];
        System.out.println("Enter the values of the 1st array: "+m*m+" elements!");
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                a[i][j]=sc.nextInt();
            }
        }
        System.out.println("Enter the values of the 2nd array: "+m*m+" elements!");
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                b[i][j]=sc.nextInt();
            }
        }
        int[][] c=new int[m][m];
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                c[i][j]=0;
                for(int k=0;k<m;k++){
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        System.out.println("The first array is: ");
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                System.out.print(a[i][j]+" ");
            }
            System.out.println();
        }
        System.out.println("The second array is: ");
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                System.out.print(b[i][j]+" ");
            }
            System.out.println();
        }
        System.out.println("The multiplication of the arrays are: ");
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                System.out.print(c[i][j]+" ");
            }
            System.out.println();
        }
        sc.close();
    }
}