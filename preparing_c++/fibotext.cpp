#include <bits/stdc++.h>
using namespace std;

int n;
string s;

string fibo(string s,int n){
    if(n==1){
        s+="A";
    }else if(n==2){
        s+="B";
    }
    else
    return fibo(s,n-1)+fibo(s,n-2);
}


int main(){
    int n; cin>>n;
    string s[n+1];
    for(int i=1;i<=n;i++){
    cout<<fibo(s,i)<<" ";
    }

}
