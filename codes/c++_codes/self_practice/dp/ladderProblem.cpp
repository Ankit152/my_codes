// this program is about getting at the top using k steps
#include<bits/stdc++.h>
using namespace std;
int solveProblem(int n,int k,vector<int> dp){
    if(n==0){
        return 1;
    }
    if(dp[n]!=0){
        return dp[n];
    }
    int ways=0;
    for(int i=1;i<=k;i++){
        if(n-i>=0){
            ways+=solveProblem(n-i,k,dp);
        }
    }
    return dp[n]=ways;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector<int> dp(n+1,0);
    cout<<solveProblem(n,k,dp);
    return 0;
}
