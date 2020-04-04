#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str;
    int i,index=0;
    cin>>str;
    for(i=1;i<str.length();i++){
        if(str[index]>str[i]){
            index=i;
        }
    }
    cout<<str[index];
    return 0;
}
