#include  <bits/stdc++.h>
using namespace std;

int f[1001],fib=0;
bool flag[1001];




int fibo(int n){ //bt-upp
    f[0]=1;
    f[1]=1;

    for(int i=2;i<=n;i++){
        f[i] = f[i-1]+f[i-2];
    }
    return f[n-1];
}

int main(){
    int n;cin>>n;
    cout<<fibo(n);
    return 0;
}