#include<iostream>
#include<unordered_map>
#include<list>
#include<queue>
using namespace std;

class Graph{
    public: 
      unordered_map<int, list<pair<int , int>>>adjList;

      void addEdge(int u, int v,int weight,  bool direction){
        if(direction == 0){
            adjList[u].push_back({v, weight});
            adjList[v].push_back({u, weight});
        }else{
            adjList[u].push_back({v, weight});
        }
      }

      void printAdjList(int n){
        for(int i=0; i<n; i++){
            cout << i << ": ";
            cout << "{ ";
            auto temp = adjList[i];
            for(auto j: temp){
                cout << "(" << j.first << "," << j.second<<"), ";
            }
            cout << "}" << endl;
        }
      }

      void bfsTraversal(int src){
        queue<int>q;
        unordered_map<int, bool>visited;

        q.push(src);
        visited[src] = true;

        while(!q.empty()){
            int frontNode = q.front();
            cout << frontNode << " ";
            q.pop();

            for(auto neighbour: adjList[frontNode]){
                int node = neighbour.first;
                int weight = neighbour.second;

                if(!visited[node]){
                    q.push(node);
                    visited[node] = true;
                }
            }
        } cout << endl;
      }

      void dfsHelper(int src, unordered_map<int, bool>&visited){
        visited[src] = true;
        cout << src << " ";

        for(auto neighbour: adjList[src]){
            int node = neighbour.first;
            int weight = neighbour.second;
            if(!visited[node]){
                dfsHelper(node, visited);
            }
        }
      }

      void dfsTraversal(int n){
        // int src = 0;
        unordered_map<int, bool> visited;
        for(int src =0; src<n; src++){ //doing this loop as there could be disconnected components
            if(!visited[src]){
                dfsHelper(src, visited);
            }
        }
      }
};

int main(){
    Graph g;
    g.addEdge(0,1,1, 5);
    g.addEdge(0,2,1, 4);
    g.addEdge(1,2,1, 3);
    g.addEdge(2,3,1, 2);
    int n = 4;
    g.printAdjList(n);
    g.bfsTraversal(0);
    g.dfsTraversal(n);
    return 0;
}