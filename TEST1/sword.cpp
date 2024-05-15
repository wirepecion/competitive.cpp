#include <bits/stdc++.h>
using namespace std;

struct sword
{
    int atk,def;
};

bool op(sword i,sword j){
    if(i.atk==j.atk){
        return i.def<j.def;
    }else{
        return i.atk<j.atk;
    }
}

sword xsword [100001];

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0); 
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
       cin>>xsword[i].atk>>xsword[i].def;
    }
    sort(xsword,xsword+t,op);

    int max=-1;int ct=0;

    for (int i = t-1; i >=0; i--)
    {
       if(xsword[i].def>max){
        ct++;
        max=xsword[i].def;
       }
    }
    cout<<ct;

    return 0;
}