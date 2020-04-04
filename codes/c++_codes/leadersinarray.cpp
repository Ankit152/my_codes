#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
	    int n,i;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++){
	        cin>>a[i];
	    }
	    deque<int> q;
	    q.push_back(0);
	    for(i=1;i<n;i++){
	    	while(!q.empty() && a[i]>a[q.back()]){
	    		q.pop_back();	
			}
			if(q.empty()==true || a[i]<=a[q.back()]){
				q.push_back(i);
			}
		}
		while(!q.empty()){
			cout<<a[q.front()]<<" ";
			q.pop_front();
		}
		cout<<"\n";
	}
	return 0;
}
