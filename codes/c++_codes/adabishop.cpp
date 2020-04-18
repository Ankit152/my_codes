#include<iostream>
using namespace std;
void print_steps(){
    cout<<"2 2\n";
    cout<<"1 3\n";
    cout<<"3 1\n";
    cout<<"2 2\n";
    cout<<"3 3\n";
    cout<<"1 5\n";
    cout<<"5 1\n";
    cout<<"3 3\n";
    cout<<"4 4\n";
    cout<<"1 7\n";
    cout<<"7 1\n";
    cout<<"4 4\n";
    cout<<"5 5\n";
    cout<<"2 8\n";
    cout<<"8 2\n";
    cout<<"5 5\n";
    cout<<"6 6\n";
    cout<<"4 8\n";
    cout<<"8 4\n";
    cout<<"6 6\n";
    cout<<"7 7\n";
    cout<<"6 8\n";
    cout<<"8 6\n";
    cout<<"7 7\n";
    cout<<"8 8\n";
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int r,c;
        cin>>r>>c;
        if(r==1 and c==1){
            cout<<"25\n";
            print_steps();
        }
        else if(r==c){
            cout<<"26\n";
            cout<<"1 1\n";
            print_steps();
        }
        else{
            cout<<"27\n";
            cout<<(r+c)/2<<" "<<(r+c)/2<<"\n";
            cout<<"1 1\n";
            print_steps();
        }
    }
    return 0;
}
