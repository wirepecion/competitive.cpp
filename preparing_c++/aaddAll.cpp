#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a,ans=0;cin>>a;
    int arr[a+1],qs[a+1];
    memset(qs,0,sizeof(qs));

    for(int i=1;i<=a;i++){
        cin>>arr[i];
        qs[i]+=qs[i-1]+arr[i];
        ans+=qs[i];
    }
    cout<<ans-arr[1];

    return 0;
}