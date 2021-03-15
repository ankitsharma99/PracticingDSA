#include<bits/stdc++.h>

using namespace std;


void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void BFS(vector<int> adj[], int v, int source){
    bool visited[v+1];

    
    fill(visited, visited+v, false);
    queue<int> q;

    q.push(source);

    visited[source] = true;

    while(!q.empty()){
        int u = q.front();

        q.pop();
        cout<<u<<"\t";

        for(auto i : adj[u]){
            if(!visited[i]){
                visited[i] = true;
                q.push(i);
            }
        }
    }
}

int main() {

    vector<int> adj[10];

    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 0, 5);
    addEdge(adj, 1, 3);
    addEdge(adj, 2, 4);
    addEdge(adj, 3, 5);
    addEdge(adj, 4, 5);

    BFS(adj, 6, 0);

    

    return 0;
}