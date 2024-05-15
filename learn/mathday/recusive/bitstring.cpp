#include <bits/stdc++.h>
using namespace std;
int n=10,ct=0;
string s;
void sol(int deep){
    if(deep==n){
        if(s.find("00000")!=-1 ||s.find("11111")!=-1){
        ct++;
        cout<<setw(4)<<ct<<" "<<s<<"\n";
        }
    }
    else{
        s+="0";
        sol(deep+1);
        s.erase(s.length()-1,1);
        s+="1";
        sol(deep+1);
        s.erase(s.length()-1,1);
    }
}
int main(){
    sol(0);
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int n=5,ct=0;
// string s;
// void sol(int deep){
//     char c;
//     if(deep==n){
//         ct++;
//         //cout<<setw(4)<<ct<<" "<<s<<"\n";
//     }
//     else{
//         for(c='A';c<'Z';c++){
//         s+=c;
//         sol(deep+1);
//         s.erase(s.length()-1,1);
//         }
//     }
// }
// int main(){
//     sol(0);
//     return 0;
// }