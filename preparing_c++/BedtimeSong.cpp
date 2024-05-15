#include <bits/stdc++.h>
using namespace std;

int main(){
    double h,m,x,y;
    cin>>h>>m;

    if(h>=21||(h==20&&m>=45)){
        x=0;
        y=0;
    }else {
        x=(21-h)*60-m-15;
        y=ceil(x/2);
    }
    cout<<x<<" "<<y;

}