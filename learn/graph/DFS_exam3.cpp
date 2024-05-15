#include <bits/stdc++.h>
using namespace std;

bool visit[8];

void add(vector<int g[],int u,int v){
    g[u].push_back(v);
    g[v].push_back(u);
}

void dfs(vector<int> g[],int src){
    stack<int> st;
    int tmp=1;
    visit[src]=true;
    st.push(src);

    while(!st.empty()){
        int s=st.top();
        st.pop();
        visit[s]=true;

        for(auto node:g[s]){
            if(visit[node]==false){
                st.push(node);
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int v,ct=0; cin>>v;
    vector<int> g[8];

    memset(visit,0,sizeof(visit));

    for(int i=0;i<v;i++){
        int u,v; cin>>u>>v;
        add(g,u,v);
    }
    for(int i=0;i<v;i++){
        dfs(g,i);
        ct++;
    }
    cout<<ct;
}