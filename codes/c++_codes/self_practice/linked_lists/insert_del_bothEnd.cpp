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
