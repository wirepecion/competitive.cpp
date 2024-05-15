#include <bits/stdc++.h>
using namespace std;

int ans=0;

int fibo(int n){
    if(n==1||n==2) return 1;
    else{
    return fibo(n-1)+fibo(n-2);
    }
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n; cin>>n;
    for(int i=1;i<=n;i++){
    cout<<fibo(i)<<" ";
    }
}