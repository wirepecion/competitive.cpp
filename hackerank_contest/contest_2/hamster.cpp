#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long int n;cin>>n;
    long long int ans = 0;
    long long int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        ans+=arr[i];
    }

    if(ans%3==0){
        cout<<"Y";
    }else cout<<"N";

    return 0;
}