#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int q;
        cin >> q;
        unordered_map<int, int> mp;
        mp.reserve(q);
        while (q--) {
            int a, x;
            cin >> a;
            if (a == 1) {
                cin >> x;
                mp[x] = 1;
            } else if (a == 2) {
                cin >> x;
                mp.erase(x);
            } else if (a == 3) {
                cin >> x;
                if (mp.count(x)) {
                    cout << 1 << " ";
                } else {
                    cout << -1 << " ";
                }
            } else if (a == 4) {
                cout << mp.size() << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
