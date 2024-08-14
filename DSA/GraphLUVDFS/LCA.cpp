// Now I think that my solution is modular, generalized and easy.

// Store the last ancestor of all the nodes of the tree.

// The intersection of the path for the nodes will be the LCA.

// One problem that I still face is the problem of zero based indexing.
#include<bits/stdc++.h>
using namespace std;
// Function to calculate the ancestor
void dfs(vector<vector<int>>& adj, int node, int parent, vector<int>& ancestor){
    // I can even fill the parent and ancestor here, i.e. 
    // ancestor[node] = parent;
    for(auto child:adj[node]){
        if(child==parent) continue;
        ancestor[child] = node;
        dfs(adj, child, node, ancestor);
    }
}
// A function to return the path of the node.
vector<int> path(vector<vector<int>>& adj, int node, vector<int>& ancestor){
    vector<int> answer;
    while(node!=ancestor[node]){
        answer.push_back(node);
        node = ancestor[node];
    }
    answer.push_back(0);
    reverse(answer.begin(), answer.end());
    return answer;
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
    vector<int> ancestor(nodes, 0);
    dfs(adj, 0, -1, ancestor);
    // cout<<"dfs complete"<<endl;
    int node1, node2;
    // cout<<"Ancestor"<<endl;
    // for(int i=0; i<ancestor.size(); i++){
    //     cout<<"For "<<i<<" "<<ancestor[i]<<endl;
    // }
    int node3;
    cin>>node3;
    vector<int> temp = path(adj, node3-1, ancestor);
    for(auto p:temp)
        cout<<p+1<<"->";
    cout<<"NULL"<<endl;
    return 0;
    cin>>node1>>node2;
    node1--, node2--;
    if(node1==node2)
        cout<<node1<<endl;
    else{
        map<int, bool> path;
        path[0] = true;
        while(ancestor[node1]!=0){
            path[ancestor[node1]] = true;
            node1 = ancestor[node1];
        }
        while(!path[node2]){
            node2 = ancestor[node2];
        }
        cout<<"LCA is "<<node2+1<<endl;
    }
}