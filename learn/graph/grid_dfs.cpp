#include<bits/stdc++.h>
using namespace std;

int g[100][100];
bool visit[100][100];
bool is_valid(int x,int y){
    if(x<0 || y<0 || x>=m || y>=n){
        return false;
    }
    if(visit[x][y]==true){
        return false;
    }
    else{
        return true;
    }
}

void bfs(int x,int y){
    queue<pair<int,int>> q;
    q.push({x,y});
    visit[x][y]=true;
    while(!q.empty()){
        int currx=q.front().first;
        int curry=q.front().second;
        q.pop();

        if(is_valid(currx-1,curry)){
            q.push(currx-1,curry);
            visit[currx-1,curry]=true;
        }
        if(is_valid(currx+1,curry)){
            q.push(currx+1,curry);
            visit[currx+1,curry]=true;
        }
        if(is_valid(currx+1,curry-1)){
            q.push(currx+1,curry-1);
            visit[currx+1,curry-1]=true;
        }
        if(is_valid(currx,curry+1)){
            q.push(currx,curry+1);
            visit[currx,curry+1]=true;
        }
    }

}

int main(){
    int m,n; cin>>m>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>g[i][j];
        }
    }
    bfs(0,0);
}