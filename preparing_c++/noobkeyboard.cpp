#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    queue<char> inner,outer;
    string s; cin>>s;
    int found=0;
    for(char c:s){
        if(c=='[' && found ==0){
            found++;
        }else if(found >=1){
            if(c==']'){
                found--;
            }else
            inner.push(c);
        }else outer.push(c);
    }

    while(!inner.empty()){
        cout<<inner.front();
        inner.pop();
    }
    while(!outer.empty()){
        cout<<outer.front();
        outer.pop();
    }
    return 0;
}