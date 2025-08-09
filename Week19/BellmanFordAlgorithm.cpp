#include <iostream>
#include <unordered_map>
#include <queue>
#include <list>
#include <vector>
#include <algorithm>
#include <stack>
#include <climits>
#include <set>
using namespace std;

class Graph
{
public:
    unordered_map<int, list<pair<int, int>>> adj;

    void addEdge(int u, int v, int w, bool direction)
    {
        if (direction == 0)
        {
            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
        }
        else
        {
            adj[u].push_back({v, w});
        }
    }

    void bellmanFordAlgo(int src, int n)
    {
        vector<int> dist(n, INT_MAX);
        dist[src] = 0;
        // n-1times loop
        for (int i = 0; i < n - 1; i++)
        {
            for (auto a : adj)
            {
                int u = a.first;
                for (auto b : a.second)
                {
                    int v = b.first;
                    int w = b.second;

                    if (dist[u] != INT_MAX && dist[u] + w < dist[v])
                    {
                        dist[v] = dist[u] + w;
                    }
                }
            }
        }

        bool negativeCyclePresent = false;
        for (auto a : adj)
        {
            int u = a.first;
            for (auto b : a.second)
            {
                int v = b.first;
                int w = b.second;

                if (dist[u] != INT_MAX && dist[u] + w < dist[v])
                {
                    dist[v] = dist[u] + w;
                    negativeCyclePresent = true;
                    break;
                }
            }
        }

        if(negativeCyclePresent) cout << "Negative Cycle Present" << endl;

        for (int i = 0; i < n; i++)
        {
            cout << dist[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Graph g;
    // g.addEdge(0, 1, -1, 1);
    // g.addEdge(1, 4, 2, 1);
    // g.addEdge(0, 2, 4, 1);
    // g.addEdge(3, 2, 5, 1);
    // g.addEdge(4, 3, -3, 1);
    // g.addEdge(1, 2, 3, 1);
    // g.addEdge(1, 3, 2, 1);
    // g.addEdge(3, 1, 1, 1);
    g.bellmanFordAlgo(0, 5);
    g.addEdge(0,1,-1,1);
    g.addEdge(1,0,-2,1);
    g.bellmanFordAlgo(0, 2);
    return 0;
}