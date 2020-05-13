#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,i,cnt=1,mn=INT_MAX,mx=INT_MIN;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=1;i<n;i++){
            if(a[i]-a[i-1]<=2){
                cnt++;
            }
            else{
                mn=min(mn,cnt);
                mx=max(mx,cnt);
                cnt=1;
            }
        }
        mn=min(mn,cnt);
        mx=max(mx,cnt);
        cout<<mn<<" "<<mx<<"\n";
    }
    return 0;
}
