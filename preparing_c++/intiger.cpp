#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    int a;
    char c;
    string s;
    while(t--){
        cin>>a>>c>>s;
        int f=1;
        for(auto x:s){
            if(x=='0'){
                f=1;
            }else{
                cout<<"NOT INTEGER"<<"\n";
                f=0;
                break;}
        }
        if(f==1) cout<<"OK"<<"\n";
    }
}