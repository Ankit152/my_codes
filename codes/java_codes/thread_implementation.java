import java.util.*;
class A extends Thread{
    public void run(){
        for(int i=1;i<=1000;i++){
            System.out.println("From thread A: i = "+i);
        }
        System.out.println("Exit from A");
    }
}
class B extends Thread{
    public void run(){
        for(int i=1;i<=5;i++){
            System.out.println("From thread B: i = "+i);
        }
        System.out.println("Exit from B");
    }
}
class C extends Thread{
    public void run(){
        for(int i=1;i<=5;i++){
            System.out.println("From thread C: i = "+i);
        }
        System.out.println("Exit from C");
    }
}
public class thread_implementation {
    public static void main(String args[]){
        new A().start();
        new B().start();
        new C().start();
    }
}