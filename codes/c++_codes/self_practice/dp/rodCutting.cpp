#include<bits/stdc++.h>
using namespace std;
int solveProblem(vector<int> arr,vector<int> dp,int n){
    if(n==0) return 0;
    if(dp[n]!=-1){
        return dp[n];
    }
    int best=0;
    for(int i=1;i<=n;i++){
        int nett=arr[i]+solveProblem(arr,dp,n-i);
        best=max(nett,best);
    }
    dp[n]=best;
    return dp[n];
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(NULL);
    int n,i;
    cin>>n;
    vector<int> arr(n+1),dp(n+1,-1);
    for(i=1;i<=n;i++){
        cin>>arr[i];
    }
    cout<<solveProblem(arr,dp,n);
    return 0;
}
