#include <bits/stdc++.h>
using namespace std;

int main(){
    int A[3],B[3],C[3],n=3;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int i=0;i<n;i++){
        cin>>B[i];
    }
        cout<<A[1]*B[2]-A[2]*B[1]<<" "<<A[2]*B[0]-A[0]*B[2]<<" "<<A[0]*B[1]-A[1]*B[0]<<" ";

}