#include<bits/stdc++.h>
using namespace std;
int solveProblem(string str1,string str2){
    int n=str1.length();
    int m=str2.length();
    int i,j;
    vector<vector<int>> dp(n+1,vector<int>(m+1));
    for(i=0;i<=n;i++) dp[i][0]=0;
    for(j=0;j<=m;j++) dp[0][j]=0;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(str1[i-1]==str2[j-1]){
                dp[i][j]++;
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    return dp[n][m];
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str1,str2;
    cin>>str1>>str2;
    cout<<solveProblem(str1,str2);
    return 0;
}
