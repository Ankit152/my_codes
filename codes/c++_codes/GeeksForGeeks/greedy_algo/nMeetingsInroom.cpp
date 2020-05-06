#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,pair<int,int>> a,pair<int,pair<int,int>> b){
    return a.second.second<b.second.second;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,i;
        cin>>n;
        vector<pair<int,pair<int,int>>> vec(n);
        for(i=0;i<n;i++){
            vec[i].first=i+1;
            cin>>vec[i].second.first;
        }
        for(i=0;i<n;i++){
            cin>>vec[i].second.second;
        }
        sort(vec.begin(),vec.end(),cmp);
        cout<<vec[0].first<<" ";
        i=0;
        for(int j=1;j<n;j++){
            if(vec[j].second.first>vec[i].second.second){
                cout<<vec[j].first<<" ";
                i=j;
            }
        }
        vec.clear();
        cout<<"\n";
    }
    return 0;
}
