#include<bits/stdc++.h>
using namespace std;
char graph[101][101];
bool visited[101][101];
int M,N;

bool is_valid(int x,int y){
    if(x <0 || y<0 || x>=N || y>=M)
        return false;
    if(visited[x][y]==true)
        return false;
        if(graph[x][y]=='.')
        return false;
    else
        return true;
}
void BFS(int x, int y){
    stack<pair<int,int>> st;
    st.push({x,y});
    visited[x][y] =true;
    //int step=0;
    while(!st.empty()){
        
        int curr_x = st.top().first;
        int curr_y = st.top().second;
        st.pop();

        int dx[] ={-1,-1,-1,0,0,1,1,1};
        int dy[] ={-1,0,1,-1,1,-1,0,1};

        for(int i=0;i<8;i++){ //define our direction 8 direction 
                if(is_valid(curr_x+dx[i],curr_y+dy[i])){
                    st.push({curr_x+dx[i],curr_y+dy[i]});
                    visited[curr_x+dx[i]][curr_y+dy[i]] = true;
                }
        }
       
    }
}

int main(){

    memset(visited,0,sizeof(visited));

    int ans;
    cin>>M>>N;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>graph[i][j];
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(visited[i][j]==false && graph[i][j]=='X'){
            BFS(i,j);
            ans++;
            }
        }
    }
    cout<<ans;



}