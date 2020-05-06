#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,i,j,mn=0,mx=0,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(i=0;i<n;i++){
            cin>>arr[i];
            if(k==0){
                mn+=arr[i];
            }
        }
        if(k==0){
            cout<<mn<<" "<<mn<<"\n";
        }
        else{
            mn=0,mx=0;
            i=0,j=n-1;
            sort(arr.begin(),arr.end());
            while(i<=j){
                mn+=arr[i];
                j-=k;
                i++;
            }
            i=0,j=n-1;
            while(i<=j){
                mx+=arr[j];
                j--;
                i+=k;
            }
            cout<<mn<<" "<<mx<<"\n";
        }
        arr.clear();
    }
    return 0;
}
