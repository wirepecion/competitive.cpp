#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);
    int n; cin >> n;

    if(n < 6) 
    {
        cout << "no";
    }
    else
    {
        vector<bool> flag(n,0);
        flag[0] = true;
        for(int i=0;i<=n;i++){
            if(flag[i]){
                if(i+6 <= n) 
                    flag[i+6] = true;
                if(i+9 <= n) 
                    flag[i+9] = true;
                if(i+20 <= n) 
                    flag[i+20] = true;
            }
        }
        
        for(int i=6;i<=n;i++){
            if(flag[i]) cout << i << "\n";
        }
    }
    return 0;
}