#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    double a,b;
    cin>>a>>b;
    char ch;
    cin>>ch;
    switch(ch){
        case '+':
            cout<<a+b<<"\n";
            break;
        case '-':
            cout<<a-b<<"\n";
            break;
        case '*':
            cout<<a*b<<"\n";
            break;
        case '/':
            cout<<fixed<<setprecision(6)<<a/b<<"\n";
            break;
    }
    return 0;
}
