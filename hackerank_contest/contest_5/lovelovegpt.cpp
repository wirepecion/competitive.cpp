#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        int ict = 0, uct = 0, ubi = 0;
        bool flag = false;
        for(char c : s) {
            if(c == 'I') {
                ict++;
                flag = true;
            }
            else if(c == 'U') {
                if(flag) {
                    uct++;
                    if(uct > ict) {
                        cout << "N\n";
                        break;
                    }
                }
                else {
                    ubi++;
                }
            }
        }
        if(ubi > ict) {
            cout << "N\n";
        }
        else if(ict == uct) {
            cout << "Y\n";
        }
        else {
            cout << "N\n";
        }
    }
    return 0;
}
