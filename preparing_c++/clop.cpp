#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;cin>>n;
    int max=0,ct=0;

    double c;

    if(n>=max) max = n;

    while(n!=1){
        c = n;
        if(n%2==0){
            n = floor(sqrt(c));
        }else{
            n = floor(pow(sqrt(c),3));
        } 
            if(n>=max) max = n;
        ct++;
    }

    cout<<max<<" "<<ct+1;
}