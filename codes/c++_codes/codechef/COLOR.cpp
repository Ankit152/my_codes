#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,i,cR=0,cG=0,cB=0;
        string str;
        cin>>n;
        cin>>str;
        for(i=0;i<n;i++){
            if(str[i]=='R') cR++;
            else if(str[i]=='G') cG++;
            else cB++;
        }
        cout<<min(cR+cB,min(cB+cG,cG+cR))<<"\n";
    }
    return 0;
}
