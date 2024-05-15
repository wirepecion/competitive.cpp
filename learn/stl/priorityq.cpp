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

        priority_queue<int> pq;  
        while (q--) {
            int a;
            cin >> a;

            if (a == 1) {  
                int x;
                cin >> x;
                pq.push(x);
                //cout << x << " ";
                priority_queue<int> cpy = pq;
                while (!cpy.empty()) {
                    cout << cpy.top() << " ";
                    cpy.pop();
                }
                cout << endl;
            } else if (a == 2) {
                if (pq.empty()) {
                    cout << "-1\n";
                } else {
                    cout << pq.top() << "\n";
                    pq.pop();
                }
            } else if (a == 3) {
                if (pq.empty()) {
                    cout << "-1\n";
                } else {
                    cout << pq.top() << "\n";
                }
            } else if (a == 4) {  
                cout << pq.size() << "\n";
            } else if (a == 5) {  
                if (pq.empty()) {
                    cout << "-1\n";
                } else {
                    priority_queue<int> tmp = pq;
                    while (!tmp.empty()) {
                        cout << tmp.top() <<" ";
                        tmp.pop();
                    }
                    cout << "\n";
                }
            }
        }
    }

    return 0;
}
