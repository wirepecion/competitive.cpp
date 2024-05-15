#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
   
    ll n,x;cin>>n;
    string s;
    char c;
    while (n--)
    {
        cin>>s;
        int a=s.size();
        c=s[a-1];
        if(s=="2"){
            cout<<"T\n";
            continue;
        }
        if((c%2)){
            cout<<"T\n";
        }else cout<<"F\n";
    }



}