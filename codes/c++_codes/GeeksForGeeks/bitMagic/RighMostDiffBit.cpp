#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
ll solve(ll n,ll m){
    if(m==0 and n==0) return -1;
    ll cnt =0;
    while(n!=0 or m!=0){
        cnt++;
        if(int(n&1)!=int(m&1)){
            break;
        }
        n>>=1;
        m>>=1;
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
        ll n,m;
        cin>>n>>m;
        cout<<solve(n,m)<<"\n";
    }
    return 0;
}
