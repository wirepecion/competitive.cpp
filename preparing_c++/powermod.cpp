#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll int power(ll int a,ll int b,ll int m){
    
    if(b==0){
        return 1;
    }
    ll int tp = power(a,b/2,m);
    if(b%2==0){
        return ((tp%m)*(tp%m))%m;
    }else{
        return ((a%m)*(((tp%m)*(tp%m))%m))%m;
    }
    
}


int main(){
    ll int a,b,m,t;cin>>t;
    while(t--){
    cin>>a>>b>>m;
    cout<<power(a,b,m)<<"\n";
    }
}