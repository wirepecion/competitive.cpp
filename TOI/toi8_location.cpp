#include <bits/stdc++.h>
using namespace std;


int main(){
    int x,y,k,res=0;
    cin>>x>>y>>k;
    int arr[x+1][y+1],qs[x+1][y+1];
    memset(qs,0,sizeof(qs));
    for(int i=1;i<=x;i++){
        for(int j=1;j<=y;j++){
            cin>>arr[i][j];
            qs[i][j]+=arr[i][j]+qs[i-1][j]+qs[i][j-1]-qs[i-1][j-1];
        }
    }

    for(int i=k;i<=x;i++){
        for(int j=k;j<=y;j++){
            res=max(res,(qs[i][j]-qs[i-k][j]-qs[i][j-k]+qs[i-k][j-k]));
        }
    }
    cout<<res;
    return 0;
}
/*
3 3
10 20 30
5 10 20
2 4 6
2 2 3 3


*/