#include<bits/stdc++.h>
using namespace std;
#define ll long long
// This code elegantly guides me to acess the root nodes;
int cat(vector<int> adj[], int root, int parent, int m, int count, vector<int>& isCat){
    if(isCat[root])
        count++;
    else
        count = 0;
    
    if(count > m)
        return 0;
    
    bool isLeaf = true;
    int ans = 0;
    
    for(auto child: adj[root]){
        if(child != parent){
            isLeaf = false;
            ans += cat(adj, child, root, m, count, isCat);
        }
    }
    // This is done to acess the leaf nodes.
    if(isLeaf)
        return 1;
    
    return ans;
}

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<int> isCat(n);
    for(int i = 0; i < n; i++){
        cin >> isCat[i];
    }
    const int N = 1e5;
    vector<int> adj[N];
    
    for(int i = 0; i < n-1; i++){
        int a, b;
        cin >> a >> b;
        a--; b--;  // assuming input nodes are 1-based, adjust to 0-based
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    
    cout << cat(adj, 0, -1, m, 0, isCat) << endl;
}
