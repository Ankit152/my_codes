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
void insert_end(node *&head,int data){
    if(head==NULL){
        head=new node(data);
        return;
    }
    node *temp=head;
    while(temp->next!=NULL){
        temp-temp->next;
    }
    temp->next=new node(data);
    return;
}
void del_beg(node *&head){
    node *temp=head;
    if(head==NULL){
        cout<<"UNDERFLOW!!!\n";
    }
    else{
        cout<<"Element deleted: "<<temp->data<<" !!!\n";
        head=head->next;
        delete(temp);
    }
    return;
}
void del_end(node *&head){
    node *temp=head,*t;
    if(head==NULL){
        cout<<"UNDERFLOW!!!\n";
    }
    else if(head->next==NULL){
        cout<<"Element deleted: "<<temp->data<<" !!!\n";
        head=head->next;
        delete(temp);
    }
    else{
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        t=temp->next;
        temp->next=NULL;
        delete(t);
    }
    return;
}
void display(node *head){
    if(head==NULL){
        cout<<"Empty!!!\n";
        return;
    }
    cout<<"The linked list is: ";
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL\n";
    return;
}
int main(){
    node *head=NULL;
    int ch,data;
    do{
        cout<<"1. Insert at beginning\n";
        cout<<"2. Insert at end\n";
        cout<<"3. Delete at beginning\n";
        cout<<"4. Delete at end\n";
        cout<<"5. Display the elements\n";
        cout<<"0. Exit\n";
        cout<<"Enter your choice: ";
        cin>>ch;
        if(ch==0){
            exit(0);
        }
        switch(ch){
            case 1:
               cout<<"\nEnter the data: ";
               cin>>data;
               insert_beg(head,data) ;
               break;
            case 2:
                cout<<"\nEnter the data: ";
                cin>>data;
                insert_end(head,data);
                break;
            case 3:
                del_beg(head);
                break;
            case 4:
                del_end(head);
                break;
            case 5:
                display(head);
                break;
            default:
                cout<<"Wrong choice!!!\n";
                break;
        }
    }while(ch!=0);
    return 0;
}
