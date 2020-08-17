import java.util.*;
class dequeImplementationLL{
    static LinkedList<Integer> l=new LinkedList<Integer>();
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int i;
        do{
            System.out.println("******************************");
            System.out.println("1. Insert at beginning\n2. Insert at end\n3. Del at beg\n4. Del at end");
            System.out.println("5: Display\n0. Exit\nEnter the choice: ");
            i=sc.nextInt();
            switch(i){
                case 1:
                    insert_beg(l);
                    break;
                case 2:
                    insert_end(l);
                    break;
                case 3:
                    del_beg(l);
                    break;
                case 4:
                    del_end(l);
                    break;
                case 5:
                    disp(l);
                    break;
            }
        }while(i!=0);
    }
    public static void insert_beg(LinkedList<Integer> l){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number: ");
        int temp=sc.nextInt();
        l.addFirst(temp);
        return;
    }
    public static void insert_end(LinkedList<Integer> l){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number: ");
        int temp=sc.nextInt();
        l.addLast(temp);
        return;
    }
    public static void del_beg(LinkedList<Integer> l){
        if(l.isEmpty()){
            System.out.println("UNDERFLOW!!!!");
            return;
        }
        System.out.println("The Begining element: "+l.getFirst());
        l.removeFirst();
        return;
    }
    public static void del_end(LinkedList<Integer> l){
        if(l.isEmpty()){
            System.out.println("UNDERFLOW!!!!");
            return;
        }
        System.out.println("The Begining element: "+l.getLast());
        l.removeLast();
        return;
    }
    public static void disp(LinkedList<Integer> l){
        if(l.isEmpty()){
            System.out.println("EMPTY!!!");
            return;
        }
        System.out.println("The Linked list elements are: "+l);
        return;
    }
}