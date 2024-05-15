#include<bits/stdc++.h>

using namespace std;

int dp1[100002],dp2[100002] ;
int arr[100002];

int main(){

    int n; cin>>n;

    for(int i = 1 ; i <= n ;i++){
        cin >>arr[i];
    }

    int mn = arr[1];
    int mx = arr[n];

    for(int i = 2 ; i <= n ;i++){
        dp1[i] = max(dp1[i - 1] , arr[i] - mn);
        mn = min(mn , arr[i]);
    }

    for(int i = n - 1 ; i >= 1 ;i --){
        dp2[i] = max(dp2[i + 1] , mx - arr[i]);
        mx = max(mx, arr[i]);
    }

    int ans = INT_MIN;

    for(int i = 2 ; i <= n - 2 ; i ++ ){
        ans = max(ans , dp1[i] + dp2[i + 1]) ;
    }

    cout<<ans;

    return 0;
}