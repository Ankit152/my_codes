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
        ll n,i;
        cin>>n;
        vector<ll> arr(n),dp(n);
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        dp[n-1]=1;
        for(i=n-2;i>=0;i--){
            if((arr[i+1]<0 and arr[i]>0) or (arr[i+1]>0 and arr[i]<0)){
                dp[i]=1+dp[i+1];
            }
            else{
                dp[i]=1;
            }
        }
        for(i=0;i<n;i++){
            cout<<dp[i]<<" ";
        }
        cout<<"\n";
        dp.clear();
        arr.clear();
    }
    return 0;
}

