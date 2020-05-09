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
    node *temp=new node(data);
    temp->next=head;
    head=temp;
    return;
}
void display(node *head){
    if(head==NULL){
        cout<<"Empty!!!";
        return;
    }
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    node *head=NULL;
    int n,i,temp;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>temp;
        insert(head,temp);
    }
    display(head);
    return 0;
}
