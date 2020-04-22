import java.util.*;
class fahcel {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        float f,c;
        System.out.println("Enter the temperature in Fahrenheit: ");
        f=sc.nextFloat();
        c = (f-32)*5/9;
        System.out.println("The temperature in Celcius is: "+c);
        sc.close();
    }
}