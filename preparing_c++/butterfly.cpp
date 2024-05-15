#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    n-=1;
    for(int i=-n;i<=n;i++){
        for(int j=-n;j<=n;j++){
            if(abs(i)<=abs(j)) cout<<"*";
            else cout<<" ";
        }
        cout<<"\n";
    }
}