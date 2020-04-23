#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m,gcd;
        cin>>n>>m;
        gcd=__gcd(n,m);
        cout<<(ll)(n/gcd)*(m/gcd)<<"\n";
    }
    return 0;
}
