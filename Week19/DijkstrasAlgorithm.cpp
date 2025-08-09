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

     void shortestDistanceDijkstra(int src, int n){
        vector<int>dist(n, INT_MAX);
        set<pair<int, int>>st;

        dist[src] = 0;
        st.insert({0, src});

        while(!st.empty()){
            auto topElement = *(st.begin());
            int distance = topElement.first;
            int node = topElement.second;
            st.erase(st.begin());

            for(auto nbr: adj[node]){
                int nbrNode = nbr.first;
                int nbrDistance = nbr.second;
                if(dist[node] + nbrDistance < dist[nbrNode]){
                    //find previous entry in set, update it and update the dist array
                    auto result = st.find({dist[nbrNode], nbrNode});

                    if(result != st.end()){
                        st.erase(result);
                    }

                    dist[nbrNode] = dist[node] + nbrDistance;
                    st.insert({dist[nbrNode], nbrNode});
                }
            }
        }

        for(int i=0; i<n;i++){
            cout << dist[i] << " ";
        }cout << endl;
     }
};

int main()
{
    Graph g;
    g.addEdge(0,5,9,0);
    g.addEdge(0,3,6,0);
    g.addEdge(5,4,2,0);
    g.addEdge(4,3,11,0);
    g.addEdge(3,2,15,0);
    g.addEdge(4,2,10,0);
    g.addEdge(1,2,7,0);
    g.addEdge(1,4,9,0);
    g.addEdge(1,5,14,0);

    g.shortestDistanceDijkstra(0,6);
    return 0;
}