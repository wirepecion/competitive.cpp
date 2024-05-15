#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> nums;
    int num;
    while(cin >> num) {
        nums.push_back(num);
    }

    int len = nums.size();
    int mask = (1 << len) - 1; // bit mask to generate all sub-permutations

    int cnt = 0;
    for (int i = mask; i >= 0; i--) {
        int sum = 0;
        for (int j = 0; j < len; j++) {
            if ((i >> j) & 1) {
                sum += nums[j];
            }
        }
        if (sum == N) {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}
