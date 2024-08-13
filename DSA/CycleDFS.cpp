#include<bits/stdc++.h>
using namespace std;
// The below dfs is more intuitive.
bool dfs(vector<vector<int>>& adj, vector<bool>& visited, int i, int parent) {
    visited[i] = true;
    for(auto child : adj[i]) {
        if(!visited[child]) {
            if(dfs(adj, visited, child, i))
                return true;
        } else if(child != parent) {
            return true; // A cycle is detected
        }
    }
    return false;
}
bool dfsBinaryOperation(vector<vector<int>>& adj, vector<bool>& visited, int i, int parent) {
    visited[i] = true;
    bool isLoop = false;
    for(auto child : adj[i]) {
        if(child==parent)
            continue;
        if(visited[child])
            return true;
        isLoop |= dfsBinaryOperation(adj, visited, child, i);
    }
    return isLoop;
}

int solve(int A, vector<vector<int>> &B) {
    vector<vector<int>> adj(A);
    for(auto &edge : B) {
        int node1 = edge[0] - 1;
        int node2 = edge[1] - 1;
        adj[node1].push_back(node2);
        adj[node2].push_back(node1);
    }
    
    vector<bool> visited(A, false);
    // if(dfs(adj, visited, 1, -1))
        // return true;
    for(int i = 0; i < A; i++) {
        if(!visited[i]) {
            if(dfs(adj, visited, i, -1))
                return true;
        }
    }
    return false; // No cycle found
}

int main(){
    // Take the input of the edges and A 
    int A;
    vector<vector<int>>B;
    cout<<solve(A, B)<<endl;
}