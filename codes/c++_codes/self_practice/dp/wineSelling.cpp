// this program is about getting the max profit by selling the wines
#include<bits/stdc++.h>
using namespace std;
int solveProblem(int i,int j,int yr,vector<int> wines,vector<vector<int>> dp){
    if(i>j){
        return 0;
    }
    if(dp[i][j]!=0){
        return dp[i][j];
    }
    int op1=yr*wines[i]+solveProblem(i+1,j,yr+1,wines,dp);
    int op2=yr*wines[j]+solveProblem(i,j-1,yr+1,wines,dp);
    dp[i][j]=max(op1,op2);
    return dp[i][j];
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int i,n;
    cin>>n;
    vector<int> wines(n);
    for(i=0;i<n;i++){
        cin>>wines[i];
    }
    vector<vector<int>> dp(n,vector<int>(n));
    cout<<solveProblem(0,n-1,1,wines,dp);
    return 0;
}
