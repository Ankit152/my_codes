#include<bits/stdc++.h>
using namespace std;
int solveProblem(vector<int> a){
    int n=a.size()-1;
    vector<vector<int>> dp(n,vector<int> (n,0));
    for(int i=1;i<n;i++){
        int r=0,c=i;
        while(c<n){
            int val=INT_MAX;
            for(int j=r;j<c;j++){
                val=min(val,dp[r][j]+dp[j+1][c]+a[r]*a[c+1]*a[j+1]);
            }
            dp[r][c]=val;
            r++;
            c++;
        }
    }
    return dp[0][n-1];
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,i;
    cin>>n;
    vector<int> a(n);
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<solveProblem(a);
    return 0;
}
