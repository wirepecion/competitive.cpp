#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        char c;
        int x;
        while(n--){
            cin>>c;
            if(c=='a'){
                cin>>x;
                v.push_back(x);
            }else if(c=='b')
            {
                sort(v.begin(),v.end(),less<int>());
            }
            else if(c=='c')
            {
                //sort(v.begin(),v.end());
                reverse(v.begin(),v.end());
            }
            else if(c=='d')
            {
                cout<<v.size()<<" ";
            }
            else if(c=='e')
            {
                for(auto m=v.begin();m<v.end();m++){
                    cout<<*m<<" ";
                }
            }
            else if(c=='f')
            {
                sort(v.begin(),v.end(),greater<int>());
            }
        }
        v.clear();
        cout<<"\n";
    }
}