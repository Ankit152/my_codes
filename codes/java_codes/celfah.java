import java.util.*;
class celfah {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        float c,f;
        System.out.println("Enter the temperature in Celcius: ");
        c = sc.nextFloat();
        f = (9*c/5)+32;
        System.out.println("The temperature in Fahrenheit is: "+f);
        sc.close();
    }
}