#include <bits/stdc++.h>
using namespace std;

vector<string> fib(100);

string letter(int n) {
    fib[1] = "L";
    fib[2] = "O";
    fib[3] = "V";
    fib[4] = "E";
  
    if (fib[n].empty()) {
        for (int i = 5; i <= n; i++) {
            fib[i] = fib[i-4] + fib[i-3] + fib[i-2] + fib[i-1];
        }
    }
    return fib[n];
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, x, t;
    cin >> t;
    while (t--) {
        cin >> n >> x;
        string ans = letter(n);
        cout << ans[x-1] << "\n";
    }
    return 0;
}
