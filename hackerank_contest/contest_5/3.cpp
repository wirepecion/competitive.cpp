#include <bits/stdc++.h>
using namespace std;

int main(){

    char c='x'; int n=4,w=30,l=5,i,j;
    int frame =2*n+1;
    for (int i = 0 ;i< frame;i++){
        for (int j = 0 ; j < frame ; j++){
            if (i<=j+n && i>=n-j) cout<<c;
            else cout<<"-";
        }
        cout<<"\n";
    }
}