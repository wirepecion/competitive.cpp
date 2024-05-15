#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int q;
        cin >> q;

        deque<int> dq;

        while(q--) {
            int a;
            cin >> a;

            if(a == 1) {
                int x;
                cin >> x;
                dq.push_front(x);
                if(!dq.empty()) {
                    for(int i : dq) {
                        cout << i << " ";
                    }
                }
                else {
                    cout << -1;
                }
                cout << endl;
            }
            else if(a == 2) {
                int x;
                cin >> x;
                dq.push_back(x);
                if(!dq.empty()) {
                    for(int i : dq) {
                        cout << i << " ";
                    }
                }
                else {
                    cout << -1;
                }
                cout << endl;
            }
            else if(a == 3) {
                if(!dq.empty()) {
                    dq.pop_front();
                    if(!dq.empty()) {
                        for(int i : dq) {
                            cout << i << " ";
                        }
                    }
                    else {
                        cout << -1;
                    }
                }
                else {
                    cout << -1;
                }
                cout << endl;
            }
            else if(a == 4) {
                if(!dq.empty()) {
                    dq.pop_back();
                    if(!dq.empty()) {
                        for(int i : dq) {
                            cout << i << " ";
                        }
                    }
                    else {
                        cout << -1;
                    }
                }
                else {
                    cout << -1;
                }
                cout << endl;
            }
            else if(a == 5) {
                if(!dq.empty()) {
                    sort(dq.begin(), dq.end());
                    for(int i : dq) {
                        cout << i << " ";
                    }
                }
                else {
                    cout << -1;
                }
                cout << endl;
            }
            else if(a == 6) {
                if(!dq.empty()) {
                    reverse(dq.begin(), dq.end());
                    for(int i : dq) {
                        cout << i << " ";
                    }
                }
                else {
                    cout << -1;
                }
                cout << endl;
            }
            else if(a == 7) {
                if(!dq.empty()) {
                    for(int i : dq) {
                        cout << i << " ";
                    }
                }
                else {
                    cout << -1;
                }
                cout << endl;
            }
            else if(a == 8) {
                cout << dq.size() << endl;
            }
            else if(a == 9) {
                if(!dq.empty()) {
                    cout << dq.front() << endl;
                }
                else {
                    cout << -1 << endl;
                }
            }
            else if(a == 10) {
                if(!dq.empty()) {
                    cout << dq.back() << endl;
                }
                else {
                    cout << -1 << endl;
                }
            }
        }
    }
    return 0;
}