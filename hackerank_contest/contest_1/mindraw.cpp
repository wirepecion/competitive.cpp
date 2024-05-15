#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main (){

    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n,x,sum = 0;
    cin>>n;
    priority_queue<int,vector<int>,greater<int>> pq;
    for(ll i=0; i<n; i++)
    {
        cin>>x;
        if(x!=0)
        {
            pq.push(x);
        }
        else
        {
            if(pq.size()>0)
            {
                sum += pq.top();
                pq.pop();
            }
        }
    }
    cout<<sum;
    return 0;
}