// Overoptimisation is a curse, try to build from brute force.

// I have the calculate the depth array and find the longest depth node

// And clear the depth arrary.

// Calc it again based on the source node and fill the array the max length is the depth.

#include<bits/stdc++.h>
using namespace std;
void dfs(vector<vector<int>>& adj, int node, int parent, vector<int>& depth){
    for(auto child:adj[node]){
        if(child==parent) continue;
        depth[child] = depth[node] + 1;
        dfs(adj, child, node, depth);
    }
}
int debug(int input){
    return input;
}
int main(){
    int nodes;
    cin>>nodes;
    vector<vector<int>> adj(nodes);
    for(int i=0; i<nodes-1; i++){
        int node1, node2;
        cin>>node1>>node2;
        // Consider one indexed input.
        adj[node1-1].push_back(node2-1);
        adj[node2-1].push_back(node1-1);
    }
    vector<int> depth(nodes, 0);
    dfs(adj, 0, -1, depth);
    int maxDepth = INT_MIN;
    int max_node = 0;
    for(int i=0; i<nodes; i++){
        // cout<<debug(i+1)<<" "<<debug(depth[i])<<endl;
        if(depth[i]>maxDepth){
            max_node = i;
            maxDepth = depth[i];
        }
    }
    depth.clear();
    dfs(adj, max_node, -1, depth);
    int diameter = 0;
    maxDepth = INT_MIN;
    // cout<<endl;
    for(int i=0; i<nodes; i++){
        // cout<<i+1<<" "<<depth[i]<<endl;
        if(depth[i]>maxDepth){
            diameter = depth[i];
        }
    }
    cout<<"The Max Diameter is "<<diameter<<endl;
    return 0;
}