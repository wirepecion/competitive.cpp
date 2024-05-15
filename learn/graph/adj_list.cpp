#include <bits/stdc++.h>
using namespace std;

#define n 5
    int graph[n][n];

void add_edge(vector<int> graph[],int u,int v){
    graph[u].push_back(v);
    graph[v].push_back(u);
}

void print_graph(vector<int> graph[],int v){
    for(int i=0;i<v;i++){
        cout<<"node"<<i<<" ";
        for(auto x:graph[i]){
            cout<<x<<" ";
        }
        cout<<"\n";
    }

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int v=5;
    vector<int> graph[v];

    add_edge(graph,0,1);
    add_edge(graph,0,4);

    add_edge(graph,1,2);
    add_edge(graph,1,3);
    add_edge(graph,1,4);

    add_edge(graph,2,3);

    add_edge(graph,3,4);

}