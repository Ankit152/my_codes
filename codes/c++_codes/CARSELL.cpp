#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--){
	    ll n,i,sum=0;
	    cin>>n;
	    ll a[n];
	    for(i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a,a+n,greater<ll>());
	    for(i=0;i<n;i++){
	        sum+=max(a[i]-i,(ll)0);
	    }
	    sum=sum%mod;
	    cout<<sum<<"\n";
	}
	return 0;
}