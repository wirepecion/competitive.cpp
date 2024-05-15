#include <bits/stdc++.h>
using namespace std;
int n,m,col[1000];
vector<int> bc;

bool qc(int k){
    int ro1=k;
    for(int ro2=1;ro2<=ro1;ro2++){
        if(col[ro1]==col[ro2]|| abs(col[ro1]-col[ro2])== ro1-ro2) return false;
    }
    return true;
}

void queen(int m){
    if(m==n){
        for(int i=0;i<n;i++){
            cout<<col[i];
        }
        cout<<"\n";
    }
    else{
        for(int i = 1;i < n;i++){
            col[m+1]=i;
            if(qc(m+1))
            queen(m+1);
        }
    }
}

// void mut(int idx){
//     if(idx==n){
//     for(int i=0;i<n;i++){
//         cout<<bc[i];
//     }
//         cout<<"\n";
//     }
//     else{
//         for(int i=1;i<=m;i++){
//             bc.push_back(i);
//             mut(idx+1);
//             bc.pop_back();
//         }
//     }
// }

int main(){
    int t;cin>>t;
    while (t--)
    {
        cin>>n;
        memset(col,0,sizeof(0));
        queen(0);
    }

}