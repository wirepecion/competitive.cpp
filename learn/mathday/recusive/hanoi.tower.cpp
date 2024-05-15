#include <bits/stdc++.h>
using namespace std;

int tower(char a,char b,char c,int n){
    if(n>0){
        tower(a,c,b,n-1);
        cout<<"move "<<n<<" from "<<a<<" to "<<c<<"\n";
        tower(b,a,c,n-1);
    }
}

int main(){
    int n=2;
    tower('a','b','c',n);
}