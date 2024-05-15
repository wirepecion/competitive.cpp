#include <bits/stdc++.h>
using namespace std;

#define n 5
    int graph[n][n];

void add_edge(int u,int v,int w){
    graph[u][v]=w;
    graph[v][u]=w;
}

void print_graph(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<"\n";
    }

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    memset(graph,0,sizeof(graph));
    add_edge(0,1);
    add_edge(0,4);
    add_edge(1,0);
    add_edge(1,2);
    add_edge(1,3);
    add_edge(1,4);
    add_edge(2,1);
    add_edge(2,3);
    add_edge(3,1);
    add_edge(3,2);
    add_edge(3,4);
    add_edge(4,0);
    add_edge(4,1);
    print_graph();

}