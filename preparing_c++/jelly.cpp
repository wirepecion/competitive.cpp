#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        bool check = true;
        int num[26] = {0};
        int a,b;
        cin >> a >> b;
        for(int i = 0 ; i < a ; i++){
            char jeli;
            cin >> jeli;
            num[jeli - 'a']++;
        }
        for(int i = 0 ; i < 26 ; i++){
            if(num[i] > b){
                cout << "NO\n";
                check = false;
                break;
            }
        }
        if(check){
            cout << "YES\n";
        }
    }
    return 0;
}