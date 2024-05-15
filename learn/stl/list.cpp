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

        list<int> A;

        while (q--) {
            int a;
            cin >> a;

            if (a == 1) {
                int x;
                cin >> x;
                A.push_back(x);
                for (auto i : A) {
                    cout << i << " ";
                }
                cout << endl;
            } else if (a == 2) {
                A.sort();
                for (auto i : A) {
                    cout << i << " ";
                }
                cout << endl;
            } else if (a == 3) {
                A.reverse();
                for (auto i : A) {
                    cout << i << " ";
                }
                cout << endl;
            } else if (a == 4) {
                cout << A.size() << endl;
            } else if (a == 5) {
                for (auto i : A) {
                    cout << i << " ";
                }
                cout << endl;
            } else if (a == 6) {
                if (!A.empty()) {
                    A.pop_back();
                    for (auto i : A) {
                        cout << i << " ";
                    }
                    cout << endl;
                } else {
                    cout << -1 << endl;
                }
            } else if (a == 7) {
                if (!A.empty()) {
                    A.pop_front();
                    for (auto i : A) {
                        cout << i << " ";
                    }
                    cout << endl;
                } else {
                    cout << -1 << endl;
                }
            } else if (a == 8) {
                int y;
                cin >> y;
                A.push_front(y);
                for (auto i : A) {
                    cout << i << " ";
                }
                cout << endl;
            }
        }
    }

    return 0;
}
