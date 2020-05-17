#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n,k,i,ans=0,x,r;
        cin>>n>>k;
        for(i=0;i<n;i++){
            cin>>x;
            r=x%k;
            if(x>=k) ans+=min(r,k-r);
            else ans+=(k-r);
        }
        cout<<ans<<"\n";
    }
    return 0;
}
