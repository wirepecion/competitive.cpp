#include<bits/stdc++.h>
using namespace std;

void add_edge(vector<pair<int,int>> g[],int u,int v,int w){
    g[u].push_back({v,w});
    g[v].push_back({u,w});
}

int shortest_path(vector<pair<int,int>> g[],int src,int end,int v){
    vector<int> dist(v,INT_MAX);
    vector<bool> visit(v,false);

    dist[src] = 0;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;

    // push distance ,node(go to)
    q.push({0,src}); 


    while(!q.empty()){
        pair<int,int> v = q.top();
        q.pop();

        int s = v.second;
        int w = v.first;

        for(auto adj_node:g[s]){ // travel in adjoint node
            int node = adj_node.first;
            int weight = adj_node.second;

            if(visit[node] == true) continue;
            visit[s] = true;
            if(dist[s]+weight < dist[node]){
                dist[node] = dist[s] + weight;
                q.push({dist[node],node});
            }
        }
    }
    return dist[end];
    //cout<<dist[end];
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int node,edge;
    cin>>node>>edge;

    int start,end,gift;
    cin>>start>>end>>gift;

    vector<pair<int,int>> g[node+1];

    while(edge--){
        int s,e,w;
        cin>>s>>e>>w;
        add_edge(g,s,e,w);
    }

    int ans = shortest_path(g,start,end,node) + shortest_path(g,start,gift,node);
    cout<<ans;
    return 0;
}

/*

6
5
1 2
1 4 5
1 3 2
3 4 6
4 2 5
0 5 5

*/