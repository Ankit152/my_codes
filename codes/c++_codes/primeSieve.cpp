#include<bits/stdc++.h>
using namespace std;
void primeSieve(int n){
    int i,j;
    vector<bool> p(n+1);
    fill(p.begin(),p.end(),true);
    p[1]=p[0]=false;
    for(i=2;i*i<=n;i++){
        if(p[i]){
            for(j=i*i;j<=n;j+=i){
                p[j]=false;
            }
        }
    }
    cout<<"The prime numbers in the range are:\n";
    for(i=2;i<=n;i++){
        if(p[i]){
            cout<<i<<" ";
        }
    }
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cout<<"Enter the upper limit for primes: ";
    cin>>n;
    primeSieve(n);
    return 0;
}