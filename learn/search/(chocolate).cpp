#include <bits/stdc++.h>
using namespace std;

int n,halfpoint,cnt=0,sum;
vector<int> bcounter;

void provide(int arr[],int m,int sum){
     if(sum>halfpoint){
            return;
        }
    if(m==n){
        if(sum==halfpoint){
            cout<<"YES\n";
        }else cout<<"NO\n";
    }
    else{
        bcounter.push_back(0);
        provide(arr,m+1,sum+bcounter[m]*arr[m]);
        sum -= bcounter[bcounter.size()-1]*arr[bcounter.size()-1];
        bcounter.pop_back();

        bcounter.push_back(1);
        provide(arr,m+1,sum+bcounter[m]*arr[m]);
        sum -= bcounter[bcounter.size()-1]*arr[bcounter.size()-1];
        bcounter.pop_back();
    }
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int t; cin>>t;
    while(t--){
        int n,sumh=0; cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
            sumh+=arr[i];
        }
        halfpoint=sumh/2;
        provide(arr,0,0);
    }
}