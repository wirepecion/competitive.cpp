#include <bits/stdc++.h>
using namespace std;

struct point{
    int start,end;
};

point query[100];

int main(){
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;cin>>n;
    int arr[n+1];
    int qs[n+1];

    memset(qs,0,sizeof(qs));

    //arr keep data
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        qs[i]=arr[i]+qs[i-1];
    }

    // query
    int q;cin>>q;


    for(int i=1;i<=q;i++){
        cin>>query[i].start>>query[i].end;
    }
    for(int i=1;i<=q;i++){
        cout<<qs[query[i].end]<<" "<<qs[query[i].start]<<"\n";
    }

    return 0;
}
/*
3 //arr size
1 4 1 //arr keep data
3 // query
1 1 // find sum strat at arr[1] to arr[1]  //4
1 2
0 2
*/

// qs 1 5 6

/*
3 
1 4 1 
3
1 1 
1 2
0 2
*/