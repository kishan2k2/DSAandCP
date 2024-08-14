// For DFS from my knowledge only add on would be on removing the visited node list by sending the parent node. along with it.

// This is especially true in tree but not in graph.

// Doing operations around the recursive call of the dfs, either while backtracking or before it.

// I will do it with visited array for graph first.


#include<bits/stdc++.h>
using namespace std;
int dfsGraph(vector<int> adj[], int root, vector<int> visited){
    visited[root] = 1;
    // Do operation before visiting any child
    for(auto child:adj[root]){
        // Do the operation after visiting all the nodes.
        if(!visited[child]){
            // Do operations here before visiting this new child
            dfsGraph(adj, child, visited);
            // Do operations here while Back tracking after visiting this child
        }
        // Do operations after visiting all the nodes.
    }
}
int dfsTree(vector<int> adj[], int root, int parent){
    for(auto child:adj[root]){
        if(child!=parent){
            // Do some operations here
            dfsTree(adj, child, child);
            // Do some operations here.
        }
    }
}
int main(){
    int nodes, edges;
    cin>>nodes>>edges;
    const int n = 1e3;
    vector<int> adj[n];
    for(int i=0; i<nodes; i++){
        int v1, v2;
        cin>>v1>>v2;
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);
    }
    vector<int> visited(nodes);
    int root = 0;
    return dfsGraph(adj, root, visited);
}

// The only secret sause to dfs is that I need to know of when to apply the operations.
// And I should not take too many things to define the state of the recursion, as it could be complex. 
// Keep the constants aside or those who need to be called with reference.