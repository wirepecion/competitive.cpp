#include<bits/stdc++.h>
using namespace std;

struct info
{
    string s;
    int score;
};

bool cmp(const info &a,const info &b){
    if(a.score!=b.score)
        return a.score>b.score;
    return a.s<b.s;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,k;cin>>n>>k;
    vector<info> order;
    info input;
    for(int i=0;i<n;i++){
        cin>>input.s>>input.score;
        order.push_back(input);
    }
    sort(order.begin(),order.end(),cmp);
    int  i = 0;
    for(const auto &input:order){
        cout<<input.s<<" "<<input.score<<"\n";
        i++;
        if(i==k) break;
    }
    return 0;

}