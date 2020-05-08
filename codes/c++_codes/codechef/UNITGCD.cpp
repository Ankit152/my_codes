#include<iostream>
typedef long long int ll;
using namespace std;
void print_coprime(const ll n){
    for(ll k=4;k<=n;k+=2){
        if(k==n){
            cout<<1<<" "<<k<<"\n";
            break;
        }
        cout<<2<<" "<<k<<" "<<(k+1)<<"\n";
    }
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n,cnt=1;
        cin>>n;
        if(n>2){
            cnt=n/2;
        }
        cout<<cnt<<"\n";
        if(n==1){
            cout<<"1 1\n";
        }
        else if(n==2){
            cout<<"2 1 2\n";
        }
        else{
            cout<<"3 1 2 3\n";
            print_coprime(n);
        }
    }
    return 0;
}
