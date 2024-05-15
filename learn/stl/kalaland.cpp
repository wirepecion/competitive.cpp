#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    string s;
    cin>>s;

    // while(next_permutation(s.begin(), s.end())){
    //     cout<<s<<"\n";
    // }

    if (next_permutation(s.begin(), s.end())){
        prev_permutation(s.begin(), s.end());
        next_permutation(s.begin(), s.end());
        cout << s ;
    }
    else {
    cout<<"No Successor";
    }
}