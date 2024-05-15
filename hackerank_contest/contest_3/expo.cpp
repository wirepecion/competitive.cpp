#include<bits/stdc++.h>
using namespace std;

int e=1000000007;

int power(int start,int index){
    if(index==0) return 1;
    int powans = power(start,index/2);
    if(index%2==0)
    return ((powans%e)*(powans%e))%e;
    else
    return start*((powans%e)*(powans%e))%e;
}

int main(){
    int n,start,index,sum=0;cin>>n;
    for(int i=0;i<n;i++){
        cin>>start>>index;
        sum+=power(start,index);
    }
    cout<<sum%e; 
    return 0;
}
