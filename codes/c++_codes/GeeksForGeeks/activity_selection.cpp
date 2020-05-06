#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b){
    return a.second<b.second;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,i,j,cnt=1;
        cin>>n;
        vector<pair<int,int>> vec(n);
        for(i=0;i<n;i++){
            cin>>vec[i].first;
        }
        for(i=0;i<n;i++){
            cin>>vec[i].second;
        }
        sort(vec.begin(),vec.end(),cmp);
        i=0;
        for(j=1;j<n;j++){
            if(vec[j].first>=vec[i].second){
                cnt++;
                i=j;
            }
        }
        vec.clear();
        cout<<cnt<<"\n";
    }
    return 0;
}

