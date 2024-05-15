#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin>>s[i];
    }
    //cout<<"\n";
    sort(s,s+n);
    for (int i = 0; i < n; i++)
    {
        if(s[i]==s[i+1]){
            continue;
        }else cout<<s[i]<<"\n";
    }
}