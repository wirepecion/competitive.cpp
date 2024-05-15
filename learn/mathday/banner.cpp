#include <bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(0);cin.tie(0);

    char c; int n,w,l,i,j;
    cin >> c >> n >> w >> l;
    int frame =2*n+1;
    for (int ir = 0 ;ir < frame*(l+1);ir++){
        for (int jr = 0 ; jr < w ; jr++){
            i=ir%frame;
            j=(jr+frame-ir/frame)%frame;
            if ((i<=j+n && i>=j-n) && (i+j>=n && i+j <=3*n)) cout<<c;
            else cout<<".";
        }
        cout<<"\n";
    }
    return 0;

}