#include <bits/stdc++.h>
using namespace std;

bool Prime(int n){
    for(int i = 2; i*i <= n ;i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){

    ios::sync_with_stdio(0);cin.tie(0);
    int n;cin>>n;
    for(int i = 2; i*i <= n ;i++){
        if (n % i == 0){
            break;
        }
    }
}