#include <bits/stdc++.h>
using namespace std;

int n,k,cnt,sum=0; 
vector<int> bcounter;

// void sums(int arr[],int m){
//         int sum=0;
//         for(int i=0;i<m;i++){
//             sum+=bcounter[i]*arr[i];
//         }
//         if(sum>k){
//             return;
//         }
//     if(m==n){
//         if(sum==k){
//             cnt++;
//         }
//     }
//     else{
//         bcounter.push_back(0);
//         sums(arr,m+1);
//         bcounter.pop_back();
//         bcounter.push_back(1);
//         sums(arr,m+1);
//         bcounter.pop_back();
//     }
// }

void sums2(int arr[],int m,int sum){
    if(sum>k){
            return;
        }
    if(m==n){
        if(sum==k){
            cnt++;
        }
    }
    else{
        bcounter.push_back(0);
        sums2(arr,m+1,sum+bcounter[m]*arr[m]);
        sum -= bcounter[bcounter.size()-1]*arr[bcounter.size()-1];
        bcounter.pop_back();

        bcounter.push_back(1);
        sums2(arr,m+1,sum+bcounter[m]*arr[m]);
        sum -= bcounter[bcounter.size()-1]*arr[bcounter.size()-1];
        bcounter.pop_back();
    }
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    cin >>n;
    int N[n];
    for(int i;i<n;i++){
        cin>>N[i];
    }
    cin >> k;
    sums2(N,0,sum);
    cout<<cnt;
}