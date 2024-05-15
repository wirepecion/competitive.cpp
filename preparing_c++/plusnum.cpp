#include<bits/stdc++.h>
using namespace std;

string sums(string a, string b) {
    string ans = "";
    int c = 0, i = a.size()-1, j = b.size()-1;
    while (i >= 0 || j >= 0 || c > 0) {
        int sum = c;
        if (i >= 0) sum += (a[i] - '0');
        if (j >= 0) sum += (b[j] - '0');
        ans += ((sum % 10) + '0');
        c = sum / 10;
        i--, j--;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string a, b;
    cin >> a >> b;
    cout << sums(a, b);

    return 0;
}
