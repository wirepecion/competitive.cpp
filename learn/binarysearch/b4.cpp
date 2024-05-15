#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    ll a,b,c,k,t,x;cin>>t;
    while(t--){
        cin>>a>>b>>c>>k;
        k-=c;
        int i=0;
        while(a*i*i+b*i<k){
            i++;
        }
        cout<<i<<"\n";
        }
    }