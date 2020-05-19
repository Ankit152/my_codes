#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int i,c1=0,c2=0,n;
        n=str.length();
        for(i=0;i<n;i++){
            str[i]=='1'?(++c1):(++c2);
            if(c1==11 and c2<10){
                cout<<"WIN\n";
                break;
            }
            else if(c1<10 and c2==11){
                cout<<"LOSE\n";
                break;
            }
            else if(c1>10 and c2>10 and c1-c2==2){
                cout<<"WIN\n";
                break;
            }
            else if(c1>10 and c2>10 and c2-c1==2){
                cout<<"LOSE\n";
                break;
            }
        }
    }
    return 0;
}
