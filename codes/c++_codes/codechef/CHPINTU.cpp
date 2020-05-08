#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        unordered_map<int,int> mp;
        int n,m;
        cin>>n>>m;
        int f[n],cnt=INT_MAX,i,x;
        for(i=0;i<n;i++){
            cin>>f[i];
        }
        for(i=0;i<n;i++){
            cin>>x;
            mp[f[i]]+=x;
        }
        for(auto it:mp){
            if(it.second<cnt){
                cnt=it.second;
            }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}