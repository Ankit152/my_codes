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
void insert_end(node *&head,int data){
    if(head==NULL){
        head=new node(data);
        return;
    }
    node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new node(data);
    return;
}
void del_beg(node *&head){
    if(head==NULL){
        cout<<"\nUNDERFLOW!!!\n";
        return;
    }
    node *t=head;
    head=head->next;
    delete(t);
    return;
}
void display(node *head){
    if(head==NULL){
        cout<<"\nEMPTY!!!\n";
        return;
    }
    cout<<"\nQueue elements: ";
    while(head!=NULL){
        cout<<head->data<<"->";
    }
    cout<<"NULL\n";
    return;
}
int main(){
    int ch,data;
    node *head=NULL;
    do{
        cout<<"1. Insert element\n";
        cout<<"2. Delete element\n";
        cout<<"3. Display element\n";
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
                insert_end(head,data);
                break;
            case 2:
                del_beg(head);
                break;
            case 3:
                display(head);
                break;
            default:
                cout<<"\nWrong choice!!!\n";
                break;
        }

    }while(ch!=0);
    return 0;
}
