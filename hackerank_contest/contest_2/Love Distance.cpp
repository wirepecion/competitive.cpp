#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void add_edge(vector<pair<ll,ll>> g[],ll u,ll v,ll w){
    g[u].push_back({v,w});
    g[v].push_back({u,w});
}

ll stp(vector<pair<ll,ll>> g[],ll src,ll f,ll size){
    vector<ll> dist(size,1e9);
    dist[src] = 0;

    vector<bool> visited(size,false);
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>> pq;
    pq.push({dist[src],src});

    while(!pq.empty()){
        ll s = pq.top().second;
        ll w = pq.top().first;

        pq.pop();
        if(visited[s]) continue;
        for(auto n : g[s]){
            ll node = n.first;
            ll weight = n.second;

            if(dist[s]+weight < dist[node]){
                dist[node] = dist[s]+weight;
                pq.push({dist[node],node});
            }
        }

        visited[s] = true;
    }

    return dist[f];
}


int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);

    ll n,e; cin >> n >> e;
    ll a,b; cin >> a >> b ;

    vector<pair<ll,ll>> g[n+1];
    for(ll i=0;i<e;i++){
        ll u,v,w; cin >> u >> v >> w;
        add_edge(g,u,v,w);
    }

    ll half1 = stp(g,1,a,n+1);
    ll half2 = stp(g,1,b,n+1);

    cout << half1<<" "<<half2;

    return 0;
}