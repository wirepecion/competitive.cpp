#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr[n];
    for(int i=0; i<n; i++){
        int input;
        cin >> input;
        arr[i].push_back(input);
    }
    // sort(arr, arr+n, [](const vector<int>&a, const vector<int>&b){
    //     return a[0] < b[0];
    // });
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        if(i>=1 && binary_search(arr[i].begin(), arr[i].end(), x)){
            cout << "Y\n";
        }else{
            cout << "N\n";
        }
    }
    return 0;
}