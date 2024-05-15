#include <bits/stdc++.h>
using namespace std;

bool Prime(int n){
    for(int i = 2; i*i <= n ;i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

int counter(int a,int b){
    int count = 0;
    for (int i = a;i <= b;i++){
        if(Prime(i)){
            count++;
        }
    }
    return count;
}
int main(){

    int a,b,count=0;
    cin >> a >> b;
    cout<<counter(a,b);

    return 0;
 }
    

