// Use case of BFS is that *When the edges are equal weighted* Then we can get the shortest path using BFS.

// I feel that doing BFS will be smoother than dfs.

#include<bits/stdc++.h>
using namespace std;
const int N =  1e5 + 7;
vector<int> graph[N];
vector<bool> visited(N);
void bfs(int node){
    queue<pair<int, int>> next;
    visited[node] = true;
    next.push({node, 0});
    while(!next.empty()){
        int topNode = next.front().first;
        int level = next.front().second;
        next.pop();
        for(auto child:graph[topNode]){
            if(visited[child]) continue;
            else visited[child] = true;
            next.push({child, level+1});
        }
        cout<<topNode+1<<" Level "<<level<<endl;
    }
    
}
int main(){
    int n;
    cin>>n;
    for(int i=0; i<n-1; i++){
        int node1, node2;
        cin>>node1>>node2;
        graph[node1-1].push_back(node2-1); 
        graph[node2-1].push_back(node1-1); 
    }
    int node;
    cout<<"Enter the node to do the level order traversal"<<endl;
    cin>>node;
    cout<<"Level order traversal from node "<<node<<endl;
    bfs(node-1);
    return 0;
}