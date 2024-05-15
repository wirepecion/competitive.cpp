#include <bits/stdc++.h>
using namespace std;
int m[15][15];
int mx = 0;
void solve(int x,int arr[],int n){

    if(x==n){
        int ct=0;
        for(int i=0 ; i<n ; i++){
            ct+=m[arr[i]-1][i];
        }
        mx = max(mx,ct);
    }else{
        for(int i=x ; i<n ; i++){

            bool pass=false;
            for(int j=0 ; j<x ; ++j)if(abs(j-x)==abs(arr[j]-arr[i]))
                {
                pass=true;
                break;
                }
            if(pass)continue;

            swap(arr[x],arr[i]);
            solve(x+1,arr,n);
            swap(arr[x],arr[i]);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);

    int n;cin >> n;
    int arr[n];

    for(int i=0 ; i<n ; ++i){
    arr[i]=i+1;
    }

    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cin >> m[i][j];
        }
    }
    solve(0,arr,n);
    cout << mx;
    return 0;
}