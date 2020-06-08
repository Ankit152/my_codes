#include<bits/stdc++.h>
using namespace std;
int solveProblem(int n){
    vector<int> dp(n+1,0);
    for(int i=2;i<=n;i++){
        int o1=INT_MAX,o2=INT_MAX,o3=INT_MAX;
        if(i%3==0){
            o3=dp[i/3]+1;
        }
        if(i%2==0){
            o2=dp[i/2]+1;
        }
        o1=dp[i-1]+1;
        dp[i]=min(o1,min(o2,o3));
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
