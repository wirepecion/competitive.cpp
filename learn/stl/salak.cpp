#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int t;cin>>t;
    int T[t];
    for(int i=0;i<t;i++){
        cin>>T[i];
    }
    for(int i=0;i<t;i++){
        for(int j=0;j<t-1;j++){
            if(j!=t-i-1)
            cout<<T[j]<<" ";
            else
            cout<<T[j]+1<<" ";
        }
        cout<<"\n";
    }
}