#include<bits/stdc++.h>
using namespace std;

void add_edge(vector<pair<int,int>> g[],int u,int v,int w){
    g[u].push_back({v,w});
    g[v].push_back({u,w});
}

void shortest_path(vector<pair<int,int>> g[],int src,int end,int v){
    vector<int> dist(v,INT_MAX);
    vector<bool> visit(v,false);
    vector<int> parent(v,-1); // parr -> pathway

    dist[src] = 0;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> q;

    // push distance ,node(gt)
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
                parent[node] = s;
                q.push({dist[node],node});
            }
        }
    }

    //pathway
    int path_node = end;
    vector<int> pathway;

    while(path_node!=-1){
        pathway.push_back(path_node);
        path_node = parent[path_node];
    }


    for(int i=pathway.size()-1;i>=0;i--){
        cout<<pathway[i]<<" ";
    }

    //dis
    cout<<"\n"<<dist[end]; 
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int node,edge;
    cin>>node>>edge;

    int start,end;
    cin>>start>>end;

    vector<pair<int,int>> g[node];

    while(edge--){
        int s,e,w;
        cin>>s>>e>>w;
        add_edge(g,s,e,w);
    }

    shortest_path(g,start,end,node);

    return 0;
}