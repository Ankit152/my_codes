import java.util.*;
class stackImplementationLL{
    static LinkedList<Integer> st=new LinkedList<Integer>();
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        int i;
        do{
            System.out.println("*****************************");
            System.out.println("1. Insert\n2. Delete\n3. Display\n0. Exit");
            System.out.println("Enter the choice:");
            i=sc.nextInt();
            switch(i){
                case 1:
                    insert(st);
                    break;
                case 2:
                    del(st);
                    break;
                case 3:
                    disp(st);
                    break;
            }
        }while(i!=0);
    }
    public static void insert(LinkedList<Integer> st){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number: ");
        int temp=sc.nextInt();
        st.addLast(temp);
    }
    public static void del(LinkedList<Integer> st){
        if(st.isEmpty()){
            System.out.println("UNDERFLOW!!!");
            return;
        }
        System.out.println("Elemented deleted: "+st.getLast());
        st.removeLast();
        return;
    }
    public static void disp(LinkedList<Integer> st){
        if(st.isEmpty()){
            System.out.println("EMPTY!!!");
            return;
        }
        System.out.println("The top element: "+st.getLast());
        return;
    }
}