#include<bits/stdc++.h>
using namespace std;


void add(vector<pair<int,int>> g[],int u,int v){
    g[u-1].push_back(v-1);
    g[v-1].push_back(u-1);
}

void dfs_until(vector<pair<int,int>> g[],int src,bool visit[])
{
    
}

void dfs(vector<pair<int,int>> g[],int u,int src){
    bool visit[v];
    memset(visit,0,sizeof(visit));
    dfs_until(g,src,visit);
}

int main(){
    int v=10;
    vector<pair<int,int>> g[v];

}