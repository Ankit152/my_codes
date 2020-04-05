#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,k,i;
    cin>>n>>k;
    ll a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    bool flag=false;
    unordered_set<ll> s;
    for(i=0;i<n;i++){
        if(s.find(k-a[i])!=s.end()){
            flag=true;
            break;
        }
        s.insert(a[i]);
    }
    if(flag) cout<<"YES";
    else cout<<"NO";
    return 0;
}