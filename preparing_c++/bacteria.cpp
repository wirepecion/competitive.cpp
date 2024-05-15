#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,ct=0;
    cin>>x;
    while(x%2!=0||(x/2)%2!=0){
        ct++;
        x=x%2;
    }
    ct++;
    cout<<ct;
}