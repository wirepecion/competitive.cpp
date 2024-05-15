#include <iostream>
#include <vector>
using namespace std;

vector<int> shuffle;

void generateShuffle(int n, int k, int l, int currentRating) {
    // If the shuffle is complete, print it and return
    if (shuffle.size() == k) {
        if (currentRating == l) {
            for (int i = 0; i < k; i++) {
                cout << shuffle[i] << " ";
            }
            cout << endl;
        }
        return;
    }
    
    // Add each possible remaining number to the shuffle and recurse
    for (int i = 1; i <= n; i++) {
        if (shuffle.size() == 0 || i > shuffle.back()) {
            shuffle.push_back(i);
            generateShuffle(n, k, l, currentRating + i);
            shuffle.pop_back();
        }
    }
}

int main() {
    int n, k, l;
    cin >> n >> k >> l;

    generateShuffle(n, k, l, 0);

    return 0;
}
