#include<bits/stdc++.h>
using namespace std;
int solveProblem(vector<int> a,int n){
    int cnt=1,i,j;
    vector<int> dp(n,1);
    for(i=1;i<n;i++){
        for(j=0;j<i;j++){
           if(a[j]<=a[i]){
                int curr=dp[j]+1;
                dp[i]=max(curr,dp[i]);
           }
        }
    }
    return dp[n-1];
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(NULL);
    int n,i;
    cin>>n;
    vector<int> a(n);
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<solveProblem(a,n);
    return 0;
}
