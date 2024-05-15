#include <bits/stdc++.h>
using namespace std;

int solve(int n) {
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0 && (i == 1 || n % (i * i) != 0)) {
            ans++;
        }
    }
    return ans;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int k;
        cin >> k;

        for (int i = k;; i++) {
            if (solve(i) == 4) {
                cout << i << "\n";
                break;
            }
        }
    }

    return 0;
}
