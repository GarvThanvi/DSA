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

    void countBridges(int src,int parent, vector<int>&tin, vector<int>&low, unordered_map<int, bool>&vis, int timer){
        timer++;
        vis[src] = true;
        tin[src] = timer;
        low[src] = timer;

        for(auto nbr: adj[src]){
            if(nbr == parent){
                continue;
            }else if(!vis[nbr]){
                //normal traversal and check for bridges
                countBridges(nbr, src, tin, low, vis, timer);
                low[src] = min(low[src], low[nbr]);
                if(low[nbr] > tin[src]){
                    cout << nbr << "-" << src << endl;
                }
            }else{
                //allready visited and not parent case
                //low time ko update karo if possible
                low[src] = min(low[src], low[nbr]);
            }
        }
    }
};

int main(){
    Graph g;
    g.addEdge(0,1,0);
    g.addEdge(1,2,0);
    g.addEdge(2,0,0);
    g.addEdge(2,3,0);
    g.addEdge(3,4,0);
    int n = 5;

    int timer = 0;
    int src = 0;
    int parent = -1;
    vector<int>low(n);
    vector<int>tin(n);
    unordered_map<int, bool>vis;
    g.countBridges(src, parent, tin, low, vis, timer);
    return 0;
}