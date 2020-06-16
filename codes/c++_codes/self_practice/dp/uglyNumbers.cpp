#include<bits/stdc++.h>
using namespace std;
int solveProblem(int n){
    vector<int> a(n);
    a[0]=1;
    int i2=0,i3=0,i5=0,i;
    int nxt2=2,nxt3=3,nxt5=5,mn=1;
    for(i=1;i<n;i++){
        mn=min(nxt2,min(nxt3,nxt5));
        a[i]=mn;
        if(mn==nxt2){
            i2++;
            nxt2=a[i2]*2;
        }
        if(mn==nxt3){
            i3++;
            nxt3=a[i3]*3;
        }
        if(mn==nxt5){
            i5++;
            nxt5=a[i5]*5;
        }
    }
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return mn;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    cout<<solveProblem(n);
    return 0;
}
