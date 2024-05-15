#include <bits/stdc++.h>
using namespace std;

vector<tuple<string,int,int>> data;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;cin>>t;
    int x,y;
    string s;
    while(t--)
    {
        int q;cin>>q;
        while(q--){
            char c;cin>>c;
            if(c=='a'){
                cin>>s>>x>>y;
                data = make_tuple(s,x,y);
                data.push_back(data);
            }else if(c=='b'){
                cout<<data.size();
            }else if(c=='c'){

            }else{
                sort(data.begin(),data.end());
            }
        }
        data.clear();
    }
}