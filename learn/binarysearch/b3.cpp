#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll int sum1=0,sum2=0,f=0,m;

ll int binary(ll int arr[],ll int a,ll int b,ll int sum1,ll int sum2){
    if(a<=b){
        ll int m = a+(b-a)/2;
        if(f==0){
            m = (1+b)/2;
            for(ll int i=0;i<m;i++){
                sum1+=arr[i];
            }
            //cout<<sum1<<" ";
            for(ll int i=m+1;i<b;i++){
                sum2+=arr[i];
            }
            //cout<<sum2<<" ";
            f++;
        }
        if(sum1==sum2){
            return 1;
        }else{
            if(sum1<sum2)
            return binary(arr,m+1,b,sum1+arr[m],sum2-arr[m]);
            else
            return binary(arr,a,m,sum1-arr[m],sum2+arr[m]);
        }

    }
    return -1;
}


int main(){
    ios::sync_with_stdio(0);cin.tie(0);

    ll int n;cin>>n;
    ll int arr[n];
    for(ll int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    ll int c=binary(arr,0,n,0,0);
    if(c==1){
        cout<<"YES";
    }else cout<<"NO";
    //cout<<sum1<<" "<<sum2;
}