#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int q;
        cin >> q;

        map<int, int> mp;

        while(q--) {
            char c;
            cin >> c;

            if(c == 'a') {
                int x, y;
                cin >> x >> y;
                mp[x] = y;
            }
            else if(c == 'b') {
                int x;
                cin >> x;
                if(mp.find(x) != mp.end()) {
                    cout << mp[x] << " ";
                }
                else {
                    cout << -1 << " ";
                }
            }
            else if(c == 'c') {
                for(auto i:mp) {
                    cout << i.first << " " << i.second << " ";
                }
                cout << endl;
            }
        }
    }

    return 0;
}
