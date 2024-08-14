#include<bits/stdc++.h>
using namespace std;
// Using adjacency list and adjacency matrix.
const int n = 1e3;
vector<pair<int, int>> adj[n]; // This will by default be set to zero. 
int matrix[n][n];
int main(){
    int n, e;
    cin>>n>>e;
    for(int i=0; i<n; i++){
        int v1, v2, wt;
        cin>>v1>>v2>>wt;
        matrix[v1][v2] = wt;
        adj[v1].push_back({v2, wt});
        adj[v2].push_back({v1, wt});
    }
    return 0;
}