// this program is to find out the maximum subarray sum
#include<bits/stdc++.h>
using namespace std;
int solveProblem(vector<int> a){
    int max_so_far=0;
    int i,n=a.size();
    int temp=0;
    for(i=0;i<n;i++){
        temp+=a[i];
        if(temp<0){
            temp=0;
        }
        max_so_far=max(temp,max_so_far);
    }
    return max_so_far;
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
