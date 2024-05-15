#include <bits/stdc++.h>
using namespace std;

int ans[301],n;

int change(int num[],int x){
    ans[0]=0;

    for(int i=1;i<=x;i++){
        ans[i]=1000;
        for(int j=0;i<n;j++){
            if(i-num[j]>=0) ans[i]=min(ans[i],1+ans[i-num[j]]);
        }
    }
    return ans[x];
} 


int main(){
    int t,n,x;cin>>t;
    while (t--)
    {
        cin>>n; int num[n];
        for(int i=0;i<n;i++){
            cin>>num[i];
        }
        cin>>x;
        cout<<change(num,x)<<"\n";
    }
    
}