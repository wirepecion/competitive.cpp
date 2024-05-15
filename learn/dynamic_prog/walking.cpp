#include <bits/stdc++.h>
using namespace std;

int dp[1000][1000];
int x[1000][1000];

// int ct_v(int i, int j){
//     if (i == 0 || j == 0) {
//         return value[i][j];
//     }
//     if (dp[i][j] != 0) {
//         return dp[i][j];
//     }
//     int path1 = ct_v(i-1, j);
//     int path2 = ct_v(i-1, j+1);
//     int path3 = ct_v(i-1, j-1);
//     dp[i][j] = max(path1,max(path2, path3)) + value[i][j];
//     return dp[i][j];
// }

int main(){
    int m, n;
    cin >> m >> n;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> x[i][j];
        }
    }
    memset(dp,0,sizeof(dp));
    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            if(j==0){
                dp[i][j]=x[i][j];
            }else{
                if(i==0)
                dp[i][j]=x[i][j]+max(dp[i][j-1],dp[i+1][j-1]);
                else if(i==m-1)
                dp[i][j]=x[i][j]+max(dp[i-1][j-1],dp[i][j-1]);
                else 
                dp[i][j]=x[i][j]+max(dp[i-1][j-1],max(dp[i][j-1],dp[i+1][j-1]));
            }
        }
    }
    int ans=INT_MIN;
    for(int i=0;i<m;i++){
        ans=max(ans,dp[i][n-1]);
    }
    cout << ans;
    return 0;
}