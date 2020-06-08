// there are only coins of 1 7 and 10 denomination
#include<bits/stdc++.h>
using namespace std;
int solveProblem(int n){
    vector<int> dp(n+1,0);
    dp[1]=1,dp[2]=2,dp[3]=3;
    dp[4]=4,dp[5]=5,dp[6]=6,dp[7]=1;
    dp[8]=2,dp[9]=3,dp[10]=1;
    for(int i=11;i<=n;i++){
        dp[i]=min(min(dp[i-1],dp[i-7]),dp[i-10])+1;
    }
    return dp[n];
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

