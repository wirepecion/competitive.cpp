#include <bits/stdc++.h>
using namespace std;

int main(){
    char c; cin >> c;
    int n; cin >> n;
    n/=2;
    for(int i=-n;i<=n;i++){
        for(int j=-n;j<=n;j++){
            if(abs(i)<=abs(j)) cout<<c; // or if(i>=j && i+j<=n+1 || )
            else cout<<" ";
        }
        cout<<"\n";
    }
}