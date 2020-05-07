#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
ll solve(ll n){
    ll cnt=0;
    for(ll i=1;i<=n;i++){
        cnt+=__builtin_popcount(i);
    }
    return cnt;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        cout<<solve(n)<<"\n";
    }
    return 0;
}
