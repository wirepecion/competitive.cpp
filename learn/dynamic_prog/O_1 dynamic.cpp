#include <bits/stdc++.h>
using namespace std;

int dp[1001][1001];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;cin>>t;
    int n,w;
    while(t--){
        cin>>n>>w;
        int val[n+1],wei[n+1];
        for(int i=0;i<n;i++){
            cin>>val[i];
        }
        for(int i=0;i<n;i++){
            cin>>wei[i];
        }
        memset(dp,0,sizeof(dp));
        // for(int i=0;i<=n;i++) dp[i][0]=0;
        // for(int j=0;j<=w;j++) dp[0][j]=0;
        for(int i=0;i<=n;i++){
            for(int j=0;j<=w;j++){
                if(i==0 ||j==0) dp[i][j]=0;
                else if(j<wei[i-1]) dp[i][j]=dp[i-1][j];
                else dp[i][j]=max(dp[i-1][j],val[i-1]+dp[i-1][j-wei[i-1]]);
            }
        }
        cout<<dp[n][w]<<"\n";

    }
    return 0;
}