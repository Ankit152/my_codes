import java.util.*;
public class leapyear{
    public static void main(String[] args){
        Scanner scr= new Scanner(System.in);
        System.out.println("Enter the year: ");
        int yr=scr.nextInt();
        if(yr%400==0){
            System.out.println("Leap Year");
        }
        else if(yr%4==0 && yr%100!=0){
            System.out.println("Leap Year");
        }
        else{
            System.out.println("Not a Leap Year");
        }
    }
}