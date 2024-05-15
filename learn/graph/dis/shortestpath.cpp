#include<bits/stdc++.h>
using namespace std;

void add_edge(vector<pair<int,int>> g[],int u,int v,int w){
    g[u].push_back({v,w});
    g[v].push_back({u,w});
}

void shortest_path(vector<pair<int,int>> g[],int src,int v){
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
    for(int i=0;i<v;i++){
        cout<<"node : "<<i<<"STP from src : "<<dist[i]<<"\n";
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int v=9;

    vector<pair<int,int>> g[v];

    add_edge(g,0,1,4);
    add_edge(g,0,7,8);
    add_edge(g,1,2,8);
    add_edge(g,1,7,11);
    add_edge(g,2,3,7);
    add_edge(g,2,5,4);
    add_edge(g,2,8,2);
    add_edge(g,3,4,9);
    add_edge(g,3,5,14);
    add_edge(g,4,5,10);
    add_edge(g,5,6,2);
    add_edge(g,6,7,1);
    add_edge(g,6,8,6);
    add_edge(g,7,8,7);

    shortest_path(g,0,9);

    return 0;
}