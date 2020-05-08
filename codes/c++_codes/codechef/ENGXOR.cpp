#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,eve=0,odd=0,p,q,i,x;
        cin>>n>>q;
        for(i=0;i<n;i++){
            cin>>x;
            x=__builtin_popcount(x);
            if(x&1){
                odd++;
            }
            else{
                eve++;
            }
        }
        for(i=0;i<q;i++){
            cin>>p;
            p=__builtin_popcount(p);
            if(p&1){
                cout<<odd<<" "<<eve<<"\n";
            }
            else{
                cout<<eve<<" "<<odd<<"\n";
            }
        }
    }
    return 0;
}
