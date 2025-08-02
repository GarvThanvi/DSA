#include<iostream>
#include<unordered_map>
#include<list>
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
};

int main(){
    Graph g;
    g.addEdge(0,1,1, 5);
    g.addEdge(0,2,1, 4);
    g.addEdge(1,2,1, 3);
    g.addEdge(2,3,1, 2);
    int n = 4;
    g.printAdjList(n);
    return 0;
}