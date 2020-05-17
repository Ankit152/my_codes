#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,i,l=-1,b=-1,j;
        cin>>n;
        vector<int> a(n);
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end(),greater<int>());
        for(i=0;i<n-1;i++){
            if(a[i]==a[i+1]){
                l=a[i];
                break;
            }
        }
        for(j=i+2;j<n-1;j++){
            if(a[j]==a[j+1]){
                b=a[j];
                break;
            }
        }
        if(l!=-1 and b!=-1) cout<<l*b<<"\n";
        else cout<<"-1\n";
        a.clear();
    }
    return 0;
}
