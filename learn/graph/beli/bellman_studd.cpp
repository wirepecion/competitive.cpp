#include <bits/stdc++.h>
using namespace std;

void bellman(int graph[][3],int v,int e ,int src){
    int dist[v];
    for(int i=0;i<v;i++){
        dist[i] = INT_MAX;
    }
    dist[src] = 0;

    for(int i=0;i<v-1;i++){
        for(int j=0;j<e;j++){
            int u = graph[j][0];
            int v = graph[j][1];
            int w = graph[j][2];

            if(dist[v] > dist[u] + w){
                dist[v] = dist[u] + w;
            }
        }
    }

    bool contain_neg_cycle =false;
    for(int j=0;j<e;j++){
            int u = graph[j][0];
            int v = graph[j][1];
            int w = graph[j][2];

            if(dist[v] > dist[u] + w){
                cout<<"graph contain_neg_cycle \n";
                contain_neg_cycle =true;
            }
        }

    if(!contain_neg_cycle){
        cout<<"STP from : ";
        for(int i=0;i<v;i++){
            cout<<i<<" distance "<<dist[i]<<"\n";
        }
    }
}



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);


    int v = 5 , e =8;

    int graph[][3] = { { 0, 1, -1 }, { 0, 2, 4 }, 
                       { 1, 2, 3 }, { 1, 3, 2 },  
                       { 1, 4, 2 }, { 3, 2, 5 },  
                       { 3, 1, 1 }, { 4, 3, -3 } 
                    }; 

    bellman(graph,v,e,0);

    return 0;
}