#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int a;cin>>a;
    int A[a];
    for(int i=0;i<a;i++){
        cin>>A[i];
    }
    sort(A,A+a,greater<int>());
    for(int i=0;i<a;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}