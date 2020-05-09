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
void insert(node *&head,int data){
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
void display(node *head){
    if(head==NULL){
        cout<<"Empty!!!\n";
        return;
    }
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
    return;
}
void del(node *&head){
    node *temp=head,*t;
    if(head==NULL){
        cout<<"Underflow!!!\n";
        return;
    }
    else if(head->next==NULL){
        t=head;
        head=NULL;
        delete(t);
        return;
    }
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    t=temp->next;
    temp->next=NULL;
    delete(t);
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    node *head=NULL;
    display(head);
    del(head);
    insert(head,2);
    display(head);
    del(head);
    display(head);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    display(head);
    del(head);
    display(head);
    return 0;
}
