#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x;cin>>n;
    int max=-1,min=1e7;
    while(n--){
        cin>>x;
        if(x>=max) max=x;
        if(x<=min) min=x;
    }
    cout<<2*max+min;

}