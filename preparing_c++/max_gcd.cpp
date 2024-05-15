#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,mx=1;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        if(__gcd(arr[i],arr[j])>mx) mx=__gcd(arr[i],arr[j]);
    }
    }
    cout<<mx;

    return 0;
}