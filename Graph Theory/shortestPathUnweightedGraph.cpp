#include<bits/stdc++.h>

using namespace std;


void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void shortestPath(vector<int> adj[], int v, int source, int dist[]){
    
    dist[source] = 0;

    queue<int> q;
    bool visited[v+1];
    fill(visited, visited+v, false);
    q.push(source);


    while(!q.empty()){
        int u = q.front();
        cout<<u<<"\t";
        q.pop();

        for(auto it : adj[source]){
            if(!visited[it]){
                dist[it] = dist[source] + 1;
                visited[it] = true;
                q.push(it);
            }
        }
    }
}

int main(){

    vector<int> adj[10];

    addEdge(adj, 0, 1);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 0, 2);
    addEdge(adj, 2, 3);
    
    int dist[5];
    fill(dist, dist+5, INT32_MAX);

    shortestPath(adj, 4, 0, dist);
    

    return 0;
}