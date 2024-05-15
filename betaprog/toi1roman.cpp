#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ct_I=0,ct_V=0,ct_X=0,ct_l=0,ct_C=0;
    for(int i=1;i<=n;i++){
        int temp = i;
        while(temp>0){
            if(temp>=100){
                ct_C++;
                temp-=100;
            }
            else if(temp>=90){
                ct_X++;
                ct_C++;
                temp-=90;
            }
            else if(temp>=50){
                ct_l++;
                temp-=50;
            }
            else if(temp>=40){
                ct_X++;
                ct_l++;
                temp-=40;
            }
            else if(temp>=10){
                ct_X++;
                temp-=10;
            }
            else if(temp>=9){
                ct_X++;
                ct_I++;
                temp-=9;
            }
            else if(temp>=5){
                ct_V++;
                temp-=5;
            }
            else if(temp>=4){
                ct_I++;
                ct_V++;
                temp-=4;
            }
            else if(temp>=1){
                ct_I++;
                temp--;
            }
        }
    }
    cout<<ct_I<<" "<<ct_V<<" "<<ct_X<<" "<<ct_l<<" "<<ct_C;
}