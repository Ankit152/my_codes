#include<iostream>
#include<cmath>
typedef long long int ll;
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll x,k,count=0,temp=2;
        cin>>x>>k;
        for(temp=2;temp<=sqrt(x);temp++){
            while(x%temp==0){
                count++;
                x=x/temp;
            }
        }
        if(x>2){
            count++;
        }
        if(count>=k){
            cout<<"1\n";
        }
        else{
            cout<<"0\n";
        }
    }
    return 0;
}