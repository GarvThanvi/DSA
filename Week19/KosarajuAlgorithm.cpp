#include<bits/stdc++.h>
using namespace std;

class Graph{
    public:
    unordered_map<int, list<int>>adj;

    void addEdge(int u, int v, bool direction){
        adj[u].push_back(v);
        if(direction == 0){
            adj[v].push_back(u);
        }
    }

    void topoSortDFS(int src, unordered_map<int, bool>&visited, stack<int>&s){
        visited[src] = true;

        for(auto nbr : adj[src]){
            if(!visited[nbr]){
                topoSortDFS(nbr, visited, s);
            }
        }

        s.push(src);
    }

    void dfs(int src, unordered_map<int, bool>&visited, unordered_map<int, list<int>>&adjNew){
        visited[src] = true;
        cout << src <<"-";
        for(auto nbr: adjNew[src]){
            if(!visited[nbr]){
                dfs(nbr, visited, adjNew);
            }
        }
    }

    int countSCC(int n){
        //Step 1 TOPOLOGICAL SORTING
        stack<int>s;
        unordered_map<int, bool>vis;
        for(int i=0; i<n;i++){
            if(!vis[i]){
                topoSortDFS(i, vis,s);
            }
        }

        //Step2 reverse all edges
        unordered_map<int, list<int>>adjNew;
        for(auto i: adj){
            int u = i.first;
            for(auto j: i.second){
                int v = j;
                adjNew[v].push_back(u);
            }
        }

        //Step 3 Traversal
        int count = 0;
        unordered_map<int, bool>visited;

        while(!s.empty()){
            int src = s.top();
            s.pop();

            if(!visited[src]){
                dfs(src, visited, adjNew);
                cout << endl;
                count++;
            }
        }
        return count;
    }
};

int main(){
    Graph g;
    g.addEdge(0,3,1);
    g.addEdge(3,2,1);
    g.addEdge(2,1,1);
    g.addEdge(1,0,1);
    g.addEdge(2,4,1);
    g.addEdge(4,5,1);
    g.addEdge(5,6,1);
    g.addEdge(6,4,1);
    g.addEdge(6,7,1);
    int n = 8;

    int sccCount = g.countSCC(n);
    cout << sccCount << endl;
    return 0;
}