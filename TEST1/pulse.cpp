#include <bits/stdc++.h>
using namespace std;

bool check[100];
int n,k;
long long int ans=0;

void bc(int l,int s){
    if(l==n && s<=k){// count
        ans++;
    }
    else if(l==n){ // full filled
        return ;
    }
    else{
        if(check[l-1] == 0){ // checl case 00
            check[l] = 1;
            bc(l+1,s);
            check[l]=0;
        }else{
            check[l] = 1;
            bc(l+1,s);
            check[l]=0;
            bc(l+1,s+1);
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    memset(check,0,sizeof(check));
    cin>>n>>k;
    bc(1,1); //st
    check[0]=1;
    bc(1,0);
    
    cout<<ans;
    return 0;
}