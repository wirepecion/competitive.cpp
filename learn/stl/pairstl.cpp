#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int q;
        cin >> q;

        vector<pair<string, pair<int, int>>> A;

        while(q--) {
            char c;
            cin >> c;

            if(c == 'a') {
                string s;
                int x, y;
                cin >> s >> x >> y;
                A.push_back(make_pair(s, make_pair(x, y)));
            }
            else if(c == 'b') {
                cout << A.size() << " ";
            }
            else if(c == 'c') {
                for(int i=0; i<A.size(); i++) {
                    cout << A[i].first << " " << A[i].second.first << " " << A[i].second.second << " ";
                }
                cout << endl;
            }
            else if(c == 'd') {
                sort(A.begin(), A.end(), [](pair<string, pair<int, int>> a, pair<string, pair<int, int>> b) {
                    if(a.second.first != b.second.first) {
                        return a.second.first < b.second.first;
                    }
                    else {
                        return a.second.second < b.second.second;
                    }
                });
            }
        }
    }

    return 0;
}
