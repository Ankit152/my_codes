#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
const int n=1e7;
bitset<10000005> b;
set<ll> primes;
void seive(){
    ll i,j;
    b[0]=b[1]=0;
    for(i=2;i<=n;i++){
        if(b[i]){
            primes.insert(i);
            for(j=i*i;j<=n;j+=i){
                b[j]=0;
            }
        }
    }
    return;
}
bool isPrime(ll num){
    if(num<=n){
        return b[num]==1?true:false;
    }
    for(auto it=primes.begin();(*it)*(*it)<=num;it++){
        if(num%(*it)==0){
            return false;
        }
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    b.set();
    seive();
    int N;
    cin>>N;
    if(isPrime(N)){
        cout<<"Yes its prime!!!";
    }
    else{
        cout<<"Not prime!!!";
    }
    return 0;
}
