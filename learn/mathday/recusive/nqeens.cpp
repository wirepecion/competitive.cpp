#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

int n=10,ct=0;
string s;
vector<bool> venticle(n,true),col(2*n,true),cs2(2*n,true);
vector<int> trace[n];

void show(){

    int i;

}

void sol(int x){
    int y;
    if(x==n){
        ct++;
        //cout<<setw(4)<<ct<<" "<<s<<"\n";
    }
    else{
        for(y=0;y<n;y++){
        if(venticle[y] && col[x+y] && cs2[x-y+n]){
            venticle[y]=false;
            col[x+y]=false;
            cs2[x-y+n]=false;
            sol(x+1);
            venticle[y]=false;
            col[x+y]=false;
            cs2[x-y+n]=false;

        }
        }
    }
}

int main (){
    int tb=4; //cin>>tb;
    sol(tb);
    return(0);
}