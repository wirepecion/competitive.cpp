/*
** @Author: Sandeep Thapar
**
** Kruskal algorithm for minimum spanning tree
**
** For video explanation, please refer to my Youtube channel in the link below:
** https://www.youtube.com/channel/UCX6rLou1VXXPVsORMVkUryg/videos
**
** Prim's algorithm for minimum spanning tree
**
** For video explanation, please refer to my Youtube channel in the link below:
** https://www.youtube.com/channel/UCX6rLou1VXXPVsORMVkUryg/videos
** Please subscribe to the channel if you find this helpful
*/

#include <iostream>
#include <vector>
#include <tuple>
#include <bits/stdc++.h>

using namespace std;

void addEdge(vector<vector<pair<int,int>>>& graph,
             vector<tuple<int,int,int>>& allEdges,
             int u, int v, int w)
{
    graph[u].push_back(make_pair(v, w));
    graph[v].push_back(make_pair(u, w));
    allEdges.emplace_back(make_tuple(u,v,w));
}

void make_set(vector<int>& parent)
{
    // initial parent for each node to themself
    for (int i = 0 ; i < parent.size() ; i++)
        //set parent
        parent[i] = i;
}

bool comp(const tuple<int,int,int>& a, const tuple<int,int,int>& b)
{
    // for each edge is <s, t, w>
    // get weight from a
    int first = get<2>(a);

    // get weight from b
    int second = get<2>(b);

    // compare if a < b
    if (first < second)
        // return true
        return true;
    //return false
    return false;
}

int find_par(vector<int>& parent, int x)
{
    // if parent of x is not x
    if(parent[x] != x)
        // parent of x = parent of parent of x
        parent[x] = find_par(parent,parent[x]);
    // return parent of x
    return parent[x];
}

void union_set(vector<int>& parent, vector<int>& ranksize, int x, int y)
{
    // find parent of x
    int par_x = find_par(parent,x);
    // find parent of y
    int par_y = find_par(parent,y);

    // if they have the same parent
    if (par_x == par_y)
        //return
        return;

    // to decide which one merge to each other, use rank
    if (ranksize[par_x] > ranksize[par_y])
        // merge y to x
        parent[par_y] = par_x;

    else
    {
        // merge x to y
        parent[par_x] = par_y;

        // if they are the same rank
        if (ranksize[par_x] == ranksize[par_y])
            // increase rank of Y
            ranksize[par_y]++;
    }
}

vector<tuple<int,int,int>> kruskal(vector<vector<pair<int,int>>>& graph,
                                   vector<tuple<int,int,int>>& allEdges)
{
    // create disjoint set
    vector<int> parent(graph.size());

    // special component to make find parent faster
    vector<int> ranksize(graph.size());

    // declare result tuple
    vector<tuple<int,int,int>> result;

    // set initial parent for each node
    // complete code line 32-38 to enable make_set
    make_set(parent);

    // sort all edge with respect to weight
    // complete code line 40-55 to enable compare for sort edges
    sort(allEdges.begin(),allEdges.end(),comp);

    // pick an edge one-by-one from smallest weight
    for (tuple<int,int,int> e : allEdges) {
        // get s of an edge
        int s = get<0>(e);
        // get t of an edge
        int t = get<1>(e);
        // get w of an edge
        int w = get<2>(e);

        // compare parent between u and v using find
        // complete code line 57-65 to enable find
        if (find_par(parent,s) != find_par(parent,t))
        {
            // there is no loop
            // add edge to the result set
            result.emplace_back(make_tuple(s,t,w));

            // union to make the parent of u, v are same
            //complete code line 67-94 to enable union_set
            union_set(parent,ranksize,s,t);
        }
    }
    // return result
    return result;
}


vector<tuple<int,int,int>> prim(vector<vector<pair<int,int>>>& graph,
                                int start)
{
    // create and initial parents of each node to -1
    vector<int> parent(graph.size(),-1);

    // create key array to track key value of each node and set to inf
    vector<int> key(graph.size(),INT_MAX);

    // create inMST to track nodes which are included in MST
    vector<bool> mseSet(graph.size(),false);

    // set key of start node to 0
    key[start] = 0;

    // <key, vertex> pair. First element of priority queue will be the minimum
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;

    // update key value with index of node to priority queue
    pq.push(make_pair(1,start));

    // create result vector of result tuple
    vector<tuple<int,int,int>> result;

    // while pq is not empty
    while (!pq.empty())
    {
        // Get min distance vertex from pq
        int v=pq.top().second;

        // pop top from pq
        pq.pop();

        // if v is not included in MST and reach by some node
        if (mseSet[v] == false && parent[v] != -1)
            // include the edge to result set
            result.emplace_back(make_tuple(parent[v],v,key[v]));

        // include v into MST
        mseSet[v] = true;

        // update the weight of adjacent node
        for(auto x:graph[v])
        {
            // x = tuple<a, w>
            // get adjacent node
            int a = x.first;
            // get adjacent weight
            int w = x.second;

            // if adjacent node is not included in MST and reaching weight is smaller than key
            if (mseSet[a] == false && key[a] > w)
            {
                // update parent
                parent[a] = v;
                // update key
                key[a] = w;
                // push to priority queue
                pq.push(make_pair(key[a],a));
            }
        }
    }
    // return result
    return result;

}

int main()
{
    /*Let us create graph
          8    7
        1---2-------3
       /|   |\      |\
      /4|   |2\     | \9
     /  |   |  \    |  \
    0   |11 8   \4  |14 4
     \  |  /|    \  |  /
      \8| /7|6    \ | /10
       \|/  |      \|/
        7---6-------5
          1      2
    */
    int V = 9;
    int E = 14;

    // pair of vertex, weight
    vector<vector<pair<int,int>>> graph(V, vector<pair<int,int>>(V));
    // tuple of vertex,vertex,weight
    vector<tuple<int,int,int>> allEdges;

    addEdge(graph, allEdges, 0, 1, 4);
    addEdge(graph, allEdges, 0, 7, 8);
    addEdge(graph, allEdges, 1, 2, 8);
    addEdge(graph, allEdges, 1, 7, 11);
    addEdge(graph, allEdges, 2, 3, 7);
    addEdge(graph, allEdges, 2, 5, 4);
    addEdge(graph, allEdges, 2, 8, 2);
    addEdge(graph, allEdges, 3, 4, 9);
    addEdge(graph, allEdges, 3, 5, 14);
    addEdge(graph, allEdges, 4, 5, 10);
    addEdge(graph, allEdges, 5, 6, 2);
    addEdge(graph, allEdges, 6, 7, 1);
    addEdge(graph, allEdges, 6, 8, 6);
    addEdge(graph, allEdges, 7, 8, 7);
//
   // complete code line 96-140 to enable kruskal function
   vector<tuple<int,int,int>> res = kruskal(graph, allEdges);
   cout << "Minimum Spanning Tree using Kruskal: " << endl;
   for (tuple<int,int,int> t : res)
       cout << get<0>(t) << "-" << get<1>(t) << "," << get<2>(t) << endl;
//
   // complete code line 143-208 to enable prim function
   res = prim(graph, 0);
   cout << "Minimum Spanning Tree using Prim: " << endl;
   for (tuple<int,int,int> t : res)
       cout << get<0>(t) << "-" << get<1>(t) << "," << get<2>(t) << endl;
   return 0;
}
