#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int q;
        cin >> q;

        unordered_map<int, int> mp;

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
                cout << mp.size() << " ";
            }
            else if(c == 'd') {
                int x;
                cin >> x;
                mp.erase(x);
            }
        }
        cout << endl;
    }

    return 0;
}