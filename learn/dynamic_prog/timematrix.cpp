#include <bits/stdc++.h>
using namespace std;

int dp[1001][1001];

int mat(int arr[],int i,int j){
    if(i>=j) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int time=INT_MAX;
    for(int k=i;k<j;k++){
        time=min(time,mat(arr,i,k)+mat(arr,k+1,j)+arr[i-1]*arr[k]*arr[j]);
    }
    return dp[i][j]=time;
}

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        memset(dp,-1,sizeof(dp));
        cout<<mat(arr,1,n-1)<<"\n";
    }
}