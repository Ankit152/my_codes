#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node *next;
        node(int data){
            this->data=data;
            next=NULL;
        }
};
void insert_beg(node *&head,int data){
    if(head==NULL){
        head=new node(data);
        return;
    }
    node *temp=new node(data);
    temp->next=head;
    head=temp;
    return;
}
void delete_beg(node *&head){
    node *t;
    if(head==NULL){
        cout<<"UNDERFLOW!!!\n";
        return;
    }
    t=head;
    cout<<"\nElement Deleted: "<<t->data<<"\n";
    head=head->next;
    delete(t);
    return;
}
void display(node *head){
    if(head==NULL){
        cout<<"\nEmpty!!!";
        return;
    }
    cout<<"\nStack elements: ";
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL\n";
    return;
}
int main(){
    int ch,data;
    node *head=NULL;
    do{
        cout<<"1. Insert in stack\n";
        cout<<"2. Delete in stack\n";
        cout<<"3. Display all elements\n";
        cout<<"0. Exit\n";
        cout<<"Enter the choice: ";
        cin>>ch;
        if(ch==0){
            exit(0);
        }
        switch(ch){
            case 1:
                cout<<"\nEnter the element: ";
                cin>>data;
                insert_beg(head,data);
                break;
            case 2:
                delete_beg(head);
                break;
            case 3:
                display(head);
                break;
            default:
                cout<<"\nWrong Input!!!";
                break;
        }
    }while(ch!=0);
    return 0;
}
