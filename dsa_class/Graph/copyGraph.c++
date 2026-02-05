#include<iostream>
#include<vector>
using namespace std;

class Graph{
    public:
        int V;
        vector<vector<int>>adj;

        Graph(int V){
            this->V = V;
            adj.resize(V);
        }
        void edges(int u, int v){
            adj[u].push_back(v);           // For undirected graph
            adj[v].push_back(u);
        }
        
};

void print(vector<vector<int>>&adj, int V){
    for (int i = 0; i < V; i++)
    {
        cout<<i<<" -> ";
        for (int j = 0; j < adj[i].size(); j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
}

vector<vector<int>> copyGraph(vector<vector<int>>adj, int V){
    vector<vector<int>>copy;
    copy.resize(V);
    for(int i = 0; i < V; i++){
        for(int j = 0; j < adj[i].size(); j++){
            copy[i].push_back(adj[i][j]);
        }
    }
    return copy;
}

int main(){
    Graph G(5);
    G.edges(0, 1);
    G.edges(0, 4);
    G.edges(1, 4);
    G.edges(1, 3);
    G.edges(1, 2);
    G.edges(3, 4);
    G.edges(2, 3);
    print(G.adj, G.V);

    cout<<endl;
    int n = G.V;
    vector<vector<int>>list = copyGraph(G.adj, G.V);
    print(list, n);
    
}