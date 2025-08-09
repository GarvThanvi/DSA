#include <iostream>
#include <unordered_map>
#include <queue>
#include <list>
#include <vector>
#include <algorithm>
#include <stack>
#include <climits>
#include<set>
using namespace std;

class Graph
{
public:
    unordered_map<int, list<pair<int, int>>> adj;

    void addEdge(int u, int v, int w,bool direction){
        if(direction == 0){
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
        }else{
            adj[u].push_back({v,w});
        }
    }

    void floydWarshalAlgo(int n){
        vector<vector<int>>dist(n, vector<int>(n, 1e9));

        //step1: diagonal pe 0
        for(int i=0; i<n ;i++){
            dist[i][i] = 0;
        }

        //step2: copy all distance from graph to matrix
        for(auto a: adj){
            int u = a.first;
            for(auto b:a.second){
                int v = b.first;
                int wt = b.second;
                dist[u][v] = wt;
            }
        }

        //step3: main logic
        for(int helper=0; helper<n; helper++){
            for(int src = 0; src<n; src++){
                for(int dest=0;dest<n;dest++){
                    dist[src][dest] = min(dist[src][dest], dist[src][helper] + dist[helper][dest]);
                }   
            }
        }

        for(int i=0; i<n;i++){
            for(int j=0; j<n;j++){
                cout << dist[i][j] << " ";
            }cout << endl;
        }
    }


};

int main()
{
    Graph g;
    g.addEdge(0,2,-2,1);
    g.addEdge(1,0,4,1);
    g.addEdge(1,2,3,1);
    g.addEdge(2,3,2,1);
    g.addEdge(3,1,-1,1);
    g.floydWarshalAlgo(4);

    return 0;
}