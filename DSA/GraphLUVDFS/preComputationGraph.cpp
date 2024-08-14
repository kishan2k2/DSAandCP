#include<bits/stdc++.h>
using namespace std;
void subtreeSumDFS(vector<vector<int>>& adj, vector<int>& v, int node, int parent){
    // Setting the value of the child node.
    v[node] = node+1;
    // I could add any or the weight of the nodes as well.
    for(auto child:adj[node]){
        if(child==parent)
            continue;
        subtreeSumDFS(adj, v, child, node);
        // Doing this operation after returning from child.
        // Because the value of the child node will be set only after visiting it.
        v[node] += v[child];
    }
}
void subtreeSumEvenCount(vector<vector<int>>& adj, vector<int>& e, int node, int parent){
    if(node%2==0)
        e[node]++;
    for(auto child:adj[node]){
        if(child==parent)
            continue;
        subtreeSumEvenCount(adj, e, child, node);
        // Doing this operation after returning from child
        e[node]+=e[child];
    }
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
    vector<int> v(nodes);
    vector<int> e(nodes, 0);
    subtreeSumDFS(adj, v, 0, -1);
    subtreeSumEvenCount(adj, e, 0, -1);
    cout<<"Number of even elements under each node"<<endl;
    for(auto i:e)
        cout<<i<<" ";
    // Print it 
    cout<<endl<<"Sum of subset "<<endl;
    for(auto i:v)   
        cout<<i<<" ";
    // Now if given Q queries I can use this precomputation.
    return 0;
}