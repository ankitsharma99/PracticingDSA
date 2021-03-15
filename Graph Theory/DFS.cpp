#include<bits/stdc++.h>

using namespace std;


void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}


void DFS(vector<int> adj[10], int source, bool visited[]){
    visited[source] = true;

    cout<<source<<"\t";

    for(auto u : adj[source]){
        if(!visited[u]){
            DFS(adj, u, visited);
        }
    }
}

void DFSRec(vector<int> adj[], int v, int source){
    bool visited[v+1];

    fill(visited, visited+v, false);

    DFS(adj, source, visited);
}

int main(){

    vector<int> adj[10];

    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 4, 5);

    DFSRec(adj, 6, 0);
    

    return 0;
}