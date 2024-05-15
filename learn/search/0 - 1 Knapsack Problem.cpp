#include <bits/stdc++.h>
using namespace std;

int x,n,vmax,xmax,sum_wx,sum_vx,W,ans=0;
pair<int,int> itm[1000];
vector<int> bc;

void solve(int idx){
    if(idx==n){
        for(int i;i<n;i++){
        sum_vx += bc[i]*itm[i].first;
        sum_vx += bc[i]*itm[i].second;
        }
        if(sum_wx<W)
        ans= max(ans,sum_wx);
    }
    else{
        bc.push_back(0);
        solve(idx+1);
        bc.pop_back();
        bc.push_back(1);
        solve(idx+1);
        bc.pop_back();
    }
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int t;cin>>t;
    while (t--)
    {
        cin>>n>>W;
        for(int i=0;i<n;i++){
            cin>>itm[i].first;
        }
        for(int i=0;i<n;i++){
            cin>>itm[i].second;
        }
        solve(0);
        cout<<ans<<"\n";
    }
    
}