#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,q;
    cin>>n>>q;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        v[i]=0;
    }
    while(q--){
        int i,t,x,y,sum=0,k=1;
        cin>>t>>x>>y;
        if(t==1){
            for(i=x-1;i<y;i++){
                v[i]+=k*(k+1);
            }
        }
        else{
            for(i=x-1;i<y;i++){
                sum+=v[i];
            }
            cout<<sum<<"\n";
        }
    }
    return 0;
}
