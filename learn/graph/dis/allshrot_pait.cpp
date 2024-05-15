#include<bits/stdc++.h>
using namespace std;

#define v 4

    int g[v][v];

void add_edge(int g[][],int u,int v,int w){
    g[u][v] = w;
}

void pt(){
    for(int i = 0;i<v;i++){
        for(int j= 0 ; j<v;j++){
            cout<<dist[i][j]<<" ";
        }
    }cout<<"\n";
}

void Floyd(int g[][]){
    int dist[v][v];
    for(int i = 0;i<v;i++){
        for(int j= 0 ; j<v;j++){
            dist[i][j] = g[i][j];
        }
    }
    for(int 
    )


}

int main(){


    for(int i = 0;i<v;i++){
        for(int j = 0;j<v;j++){
            if(i==j){
                add_edge(g,i,j,0);
            }else{
                add_edge(g,i,j,INT_MAX);
            }
        }
    }

    add_edge(g,0,1,5);
    add_edge(g,0,3,10);
    add_edge(g,1,2,3);
    add_edge(g,2,3,1);

    return 0;
}
