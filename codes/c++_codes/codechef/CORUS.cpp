#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
unordered_map<char,ll> mp;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
       ll n,q,i,mx=-1;
       string str;
       cin>>n>>q;
       cin>>str;
       for(i=0;i<n;i++){
           mp[str[i]]++;
           if(mp[str[i]]>mx) mx=mp[str[i]];
       }
       //cout<<mx<<"\n";
       vector<ll> a(mx+1,0);
       for(auto it:mp){
           a[it.second]++;
       }
       mp.clear();
       while(q--){
           ll c,temp;
           cin>>c;
           if(mx<=c){
               temp=0;
           }
           else{
               temp=0;
               for(i=c+1;i<=mx;i++){
                   temp+=(i-c)*a[i];
               }
           }
           cout<<temp<<"\n";
       }
       a.clear();
    }
    return 0;
}
