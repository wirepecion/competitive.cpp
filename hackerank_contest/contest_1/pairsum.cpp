#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int same = 0;
    int a[n], b[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    sort(a, a+n);
    sort(b, b+n, greater<int>());

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] + b[i] > k) {
            count++;
        } else if (a[i] + b[i] == k) {
            same++;
        }
    }

    cout << count + (same/2) << "\n";

    return 0;
}