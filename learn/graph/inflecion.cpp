#include<bits/stdc++.h>
using namespace std;

void add_edge(vector<int> graph[],int u,int v){
    graph[u-1].push_back(v-1);
    graph[v-1].push_back(u-1);
}


void bfs(vector<int> graph[],int v,int src){
    bool visit[v];
    int dis[v];
    memset(dis,0,sizeof(dis));
    memset(visit,0,sizeof(visit));
    queue<int> q;
    visit[src-1] = true;
    q.push(src-1);

    while(!q.empty()){
        int s=q.front();
        q.pop();
        cout<<s+1<<" ";
        for(auto node:graph[s]){
            if(visit[node]==false){
                visit[node]=true;
                dis[node]=dis[s]+1;
                q.push(node);
            }
        }
    }
    cout<<"\n";
    for(int i=0;i<v;i++){
        cout<<dis[i]<<" ";
    }

}
int main(){
    int v=10;
    vector<int> graph[v];
    add_edge(graph,1,2);
    add_edge(graph,1,3);
    add_edge(graph,1,4);
    add_edge(graph,2,5);
    add_edge(graph,3,6);
    add_edge(graph,3,7);
    add_edge(graph,4,8);
    add_edge(graph,5,9);
    add_edge(graph,6,10);
    bfs(graph,v,1);

}