#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,k,i;
        double sum=0;
        cin>>n>>k;
        vector<int> a(n);
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        for(i=k;i<n-k;i++){
            sum+=a[i];
        }
        a.clear();
        cout<<fixed<<setprecision(6)<<sum/(n-2*k)<<"\n";
    }
    return 0;
}
