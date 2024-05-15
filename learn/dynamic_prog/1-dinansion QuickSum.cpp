#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    int a[100];
    int qs[100];
    memset(qs,0,sizeof(qs));
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        qs[i]+=a[i]+qs[i-1];
    }
    for(int i=1;i<=n;i++){
        cout<<qs[i]<<" ";
    }
    int start,end;
    cin>>start>>end;
    cout<<qs[end]-qs[start-1];
}

// 6 1 2 3 4 5 6