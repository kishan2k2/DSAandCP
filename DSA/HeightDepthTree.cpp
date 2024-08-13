#include<bits/stdc++.h>
using namespace std;
int dfs(vector<vector<int>>& adj, vector<int>& height, vector<int>& depth, int node, int parent, int d){
    int h = 0;
    bool isleaf = true;
    depth[node] = d;
    for(auto child:adj[node]){
        if(child==parent)
            continue;
        isleaf = false;
        int comp = dfs(adj, height, depth, child, node, d+1);
        h = max(h, comp+1);
    }
    height[node] = h;
    return height[node];
}
void dfsClean(vector<vector<int>>& adj, vector<int>& height, vector<int>& depth, int node, int parent){
    for(auto child:adj[node]){
        if(child==parent)
            continue;
        depth[child] = depth[node] + 1;
        dfsClean(adj, height, depth, node, parent);
        height[node] = max(height[node], height[child] + 1);
    }
    return ;
}
int main(){
    // Taking the input of graph.
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
    // Creating a height and depth tree.
    vector<int> height(nodes, 0), depth(nodes, 0);
    dfs(adj, height, depth, 0, -1, 0);
    cout<<"After recursion"<<endl;
    for(auto i:height)
        cout<<i<<" ";
    cout<<endl;
    for(auto i:depth)
        cout<<i<<" ";
    return 0;
}