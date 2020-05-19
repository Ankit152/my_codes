#include<iostream>
using namespace std;
bool solve(string str){
    if(str[0]==str[1]) return false;
    int n=str.length(),i;
    for(i=0;i+2<n;i++){
        if(str[i]!=str[i+2]){
            return false;
        }
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        if(solve(str)) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
