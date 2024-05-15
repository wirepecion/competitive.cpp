#include <bits/stdc++.h>
using namespace std;

int lcs(int x,int y,char*a,char*b){
    int L[x+1][y+1];
    for(int i=0;i<=x;i++) L[i][0]=0;
    for(int j=0;j<=y;j++) L[0][j]=0;
    for(int i=1;i<=x;i++){
        for(int j=1;j<=y;j++){
            if(a[i]==b[j]){
                L[i][j]=L[i-1][j-1]+1;
            }else{
                L[i][j]= max(L[i-1][j],L[i][j-1]);
            }
        }
    }
    return L[x][y];
}


int main(){
    int t;
    while(cin>>t){
        int a,b;
        cin>>a>>b;
        char aa[a+1],bb[b+1];
        cin>>aa>>bb;
        cout<<lcs(a,b,aa,bb)<<"\n";
    }
}