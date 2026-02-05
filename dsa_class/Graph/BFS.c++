#include<iostream>
#include<vector>
#include<queue>
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
            adj[u].push_back(v);         // For directed graph
        }
        
        void print(){
            for (int i = 0; i < V; i++)
            {   cout<<i<<" -> ";
                for(int j = 0; j < adj[i].size(); j++){
                    cout<<adj[i][j]<<" ";
                }
                cout<<endl;
            }
            
        }

        vector<int> BFS(int src){
            vector<int>result;
            vector<bool>visited(V, false);
            visited[src] = true;
            queue<int>q;
            q.push(src);

            while(!q.empty()){
                int node = q.front();
                q.pop();
                result.push_back(node);
                
                for(auto i : adj[node]){
                    if(!visited[i]){
                        visited[i] = true;
                        q.push(i);
                    }
                }
            }
            return result;
        }
};

int main(){
    Graph G(4);
    G.edges(2,0);
    G.edges(0,2);
    G.edges(0,1);
    G.edges(1,2);
    G.edges(2,3);
    G.edges(3,3);
    
    G.print();
    cout<<endl;
    vector<int>res;
    res = G.BFS(2);
    for(int i = 0; i < res.size(); i++){
        cout<<res[i]<<" ";
    }
}