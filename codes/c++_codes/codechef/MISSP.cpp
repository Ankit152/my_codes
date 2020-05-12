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
        int n,i,x,ans=0;
        cin>>n;
        for(i=0;i<n;i++){
            cin>>x;
            ans^=x;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
