#include<bits/stdc++.h>
using namespace std;
const int n=3005;
vector<int> prime(n,0);
void seive(){
    int i,j;
    for(i=2;i<=3005;i++){
        if(!prime[i]){
            for(j=i;j<=3005;j+=i){
                prime[j]++;
            }
        }
    }
}
int showPrime(int N){
    int cnt=0,i;
    for(i=2;i<=N;i++){
        if(prime[i]==2){
            cnt++;
        }
    }
    return cnt;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    seive();
    int N;
    cin>>N;
    assert(N>=1 and N<=3000);
    cout<<showPrime(N);
    return 0;
}
