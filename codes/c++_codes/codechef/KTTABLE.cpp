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
        ll n,i,x,ans=0;
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        cin>>x;
        if(x<=a[0]){
            ans++;
        }
        for(i=1;i<n;i++){
            cin>>x;
            if(a[i]-a[i-1]>=x){
                ans++;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
