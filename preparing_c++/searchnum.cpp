#include <bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int ct=0;
    int n,k; cin>>n>>k;
    int price[n];
    int money[k];

    for(int i=0;i<n;i++)
    cin>>price[i];

    for(int i=0;i<n;i++){
        cin>>money[i];
    }
    
    for(int i=0;i<n;i++){
        int ct=0;
            for(int j=0;j<k;j++){
                    if(money[i]>=price[j])
                    {
                    money[i]-=price[j];
                    ct++;
                    }
                    else break;
            }
            cout<<ct<<"\n";  
        }
    
    // //else{ //k>m
    //     for(int i=0;i<n;i++){
    //     int ct=0;
    //         for(int j=0;j<k;j++){
    //                 if(money[i]>=price[j])
    //                 {
    //                 money[i]-=price[j];
    //                 ct++;
    //                 }
    //                 else break;
    //         }
    //         cout<<ct<<"\n";  
    //     }
    // }

    return 0;
}

/*
3 3
10 20 30
15 30 7
*/