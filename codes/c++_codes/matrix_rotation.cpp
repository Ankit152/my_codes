#include<bits/stdc++.h>
using namespace std;
void rotate(vector<vector<int>> &v,int r,int n){
	r=r%(4*n);
	if(r==0){
		return;
	}
	int i,j,k,t1,t2;
	for(k=1;k<=r;k++){
		t1=v[0][n-1];
		for(i=n-1;i>=1;i--){
			v[0][i]=v[0][i-1];
		}
		t2=v[n-1][n-1];
		for(i=n-1;i>=1;i--){
			v[i][n-1]=v[i-1][n-1];
		}
		v[1][n-1]=t1;
		t1=v[n-1][0];
		for(i=n-1;i>=1;i--){
			v[n-1][i]=v[n-1][i-1];
		}
		t2=v[1][0];
		for(i=n-1;i>=1;i--){
			v[i][n-1]=v[i-1][n-1];
		}
		v[0][0]=t2;
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cout.tie(NULL);
	int n,i,j,r;
	cin>>n;
	vector<vector<int>> v(n);
	for(i=0;i<n;i++){
		v[i].resize(n);
		for(j=0;j<n;j++){
			cin>>v[i][j];
		}
	}
	cin>>r;
	rotate(v,r,n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout<<v[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
