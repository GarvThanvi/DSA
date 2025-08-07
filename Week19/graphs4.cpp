#include<iostream>
#include<unordered_map>
#include<queue>
#include<list>
#include<vector>
#include<algorithm>
#include<stack>
#include<climits>
using namespace std;

class Graph{
    public:
    //  unordered_map<int, list<int>>adj;
    unordered_map<int, list<pair<int, int>>>adj;

     void addEdge(int u, int v, int w,bool direction){
        if(direction == 0){
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
        }else{
            adj[u].push_back({v,w});
        }
     }

    //  void printAdjList(int n){
    //     for(int i=0; i<n; i++){
    //         cout << i << "{ ";
    //         for(auto j: adj[i]){
    //             cout << j << "," ;
    //         }cout << "}" << endl;
    //     }
    //  }

    //  void shortestPathBFS(int src, int dest){
    //     unordered_map<int, bool>vis;
    //     unordered_map<int, int>parent;
    //     queue<int>q;

    //     q.push(src);
    //     vis[src] = true;
    //     parent[src] = -1;

    //     while(!q.empty()){
    //         int frontNode = q.front();
    //         q.pop();

    //         for(auto nbr: adj[frontNode]){
    //             if(!vis[nbr]){
    //                 q.push(nbr);
    //                 vis[nbr] = true;
    //                 parent[nbr] = frontNode;
    //             }
    //         }
    //     }

    //     vector<int>path;
    //     int node = dest;
    //     while(node != -1){
    //         path.push_back(node);
    //         node = parent[node];
    //     }

    //     reverse(path.begin(), path.end());
    //     for(auto i: path){
    //         cout << i << " ";
    //     }cout << endl;
    //  }

     void topoDFS(int src, unordered_map<int, bool>&visited, stack<int>&ans){
        visited[src] = true;
        
        for(auto nbr: adj[src]){
            if(!visited[nbr.first]){
                topoDFS(nbr.first, visited, ans);
            }
        }
        
        ans.push(src);
    }

     void shortestPathDFS(int src){
        //Topological Sort
        stack<int>topoOrder;
        unordered_map<int, bool>vis;
        topoDFS(src, vis, topoOrder);

        int n = topoOrder.size();
        vector<int>dist(n, INT_MAX);
        dist[src] = 0;

        //handle source node differently
        for(auto nbr: adj[src]){
            int node = nbr.first;
            int weightDistance = nbr.second;

            if(dist[src] + weightDistance < dist[node]){
                dist[node] = dist[src] + weightDistance;
            }
        }

        //handle rest nodes
        while(!topoOrder.empty()){
            int frontNode = topoOrder.top();
            topoOrder.pop();

            for(auto nbr: adj[frontNode]){
                int node = nbr.first;
                int weightDistance = nbr.second;

                if(dist[frontNode] + weightDistance < dist[node]){
                    dist[node] = dist[frontNode] + weightDistance;
                }
            }
        }

        for(auto i:dist){
            cout << i << " ";
        }cout << endl;
     }
};

int main(){
    // Graph g;
    // g.addEdge(0,1,0);
    // g.addEdge(1,2,0);
    // g.addEdge(2,3,0);
    // g.addEdge(2,4,0);
    // g.addEdge(4,5,0);
    // g.addEdge(5,3,0);

    // int src = 0;
    // int dest = 3;
    // g.shortestPathBFS(src, dest);

    Graph g;
    g.addEdge(0,1,5,1);
    g.addEdge(0,2,13,1);
    g.addEdge(0,4,3,1);
    g.addEdge(1,2,7,1);
    g.addEdge(1,4,1,1);
    g.addEdge(4,3,6,1);
    g.addEdge(3,2,2,1);

    g.shortestPathDFS(0);
    return 0;
}