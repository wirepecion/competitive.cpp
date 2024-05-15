#include <bits/stdc++.h>
using namespace std;

void add_edge(vector<pair<int,int>> graph[],int u,int v,int w){
    graph[u].push_back(make_pair(v,w));
}

void print_graph(vector<pair<int,int>> graph[],int v){
    for(int i=0;i<v;i++){
        cout<<"From "<<i<<"\n";
        for(auto x:graph[i]){
            cout<<"To "<<x.first<<" Weight "<<x.second<<"\n";
        }
        cout<<"\n";
    }

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int v=4;
    vector<pair<int,int>> graph[v];

    add_edge(graph,0,1,10);
    add_edge(graph,0,2,3);
    add_edge(graph,0,3,2);
    add_edge(graph,1,3,7);
    add_edge(graph,2,3,6);
    print_graph(graph,v);
}