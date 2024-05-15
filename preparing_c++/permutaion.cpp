#include <bits/stdc++.h>
using namespace std;

vector<int> perm(int N, int K, int L) {
    vector<int> chain(N);
    for (int i = 0; i < N; i++) {
        chain[i] = i + 1;
    }

    int ct = 0;
    do {
        ct++;
        if (ct == L) {
            vector<int> per_num(K);
            for (int i = 0; i < K; i++) {
                per_num[i] = chain[i];
            }
            return per_num;
        }
    } while (next_permutation(chain.begin(), chain.end()) && ct < L);

    return vector<int>();
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, K, L;
    cin >> N >> K >> L;

    vector<int> num_per = perm(N, K, L);
    if (num_per.empty()) {
        return 0;
    } else {
        for (int i = 0; i < K; i++) {
            cout << num_per[i] << " ";
        }
    }

    return 0;
}
