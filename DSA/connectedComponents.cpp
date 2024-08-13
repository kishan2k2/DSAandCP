#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<vector<int>> cc;
vector<int> current_cc;
// I don't know if decalring things in global variable is a good practice or not, but I think that it can def reduce some complexity.
void dfs(vector<vector<int>>& adj, vector<bool>& visited, int& i){
    visited[i] = true;
    current_cc.push_back(i);
    for(auto child:adj[i]){
        if(!visited[child])
            dfs(adj, visited, child);
    }
}
int main() {
	int n, e;
    cin>>n>>e;
    vector<vector<int>> adj(n);
    for(int i=0; i<e; i++){
        int a, b;
        cin>>a>>b;
        // Now i get that why we need to 
        adj[a-1].push_back(b-1);
        adj[b-1].push_back(a-1);
    }
    int comp = 0;
    vector<bool> visited(n);
    for(int i=0; i<n; i++){
        if(!visited[i]){
            current_cc.clear();
            dfs(adj, visited, i);
            cc.push_back(current_cc);
            comp++;
        }
    }
    cout<<comp<<endl;
}
