#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
ll nc2(ll n){
    if(n==2) return 1;
    else return n*(n-1)/2;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,i,x;
    cin>>n;
    vector<ll> arr(n);
    for(i=0;i<n;i++){
        cin>>x;
        if(i==0){
            arr[i]=x;
        }
        else{
            arr[i]=x+arr[i-1];
        }
    }
    for(i=0;i<n;i++){
        arr[i]=arr[i]%n;
    }
    unordered_map<ll,ll> mp;
    mp[0]++;
    for(i=0;i<n;i++){
        mp[arr[i]]++;
    }
    x=0;
    for(auto it:mp){
        if(it.second>1){
            x+=nc2(it.second);
        }
    }
    cout<<x;
    mp.clear();
    return 0;
}
