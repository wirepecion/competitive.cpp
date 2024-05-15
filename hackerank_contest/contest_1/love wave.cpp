#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    while(n--){
        int ct = 0;
        string s; cin >> s;
        bool track = 0;
        for(auto c:s){
            if(c == 'I') ct++;
            else if(ct) ct--;
            else {
                track = 1;
                break;
            }
        }
        if(track || ct) cout << "N\n";
        else cout << "Y\n";
    }

    return 0;
}