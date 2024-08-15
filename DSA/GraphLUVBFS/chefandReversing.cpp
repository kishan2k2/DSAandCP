#include<bits/stdc++.h>
using namespace std;

const int n = 1e5 + 10;
vector<pair<int, int>> Graph[n];
bool visited[n];
int nodes, edges;

void bfs(int n1, int n2){
    deque<pair<int, int>> q;
    q.push_back({n1, 0});
    int sum = 0;
    // cout<<n1<<" "<<n2<<endl;
    while(!q.empty()){
        pair<int, int> top = q.front();
        int node = top.first;
        int val = top.second;
        // cout<<"In "<<n1<<" "<<val<<endl;
        q.pop_front();

        if (visited[node]) continue;
        visited[node] = true;
        if (val) 
            sum++;

        // Check the condition of reaching the target.
        if (node == n2){
            cout << sum << endl;
            return;
        }

        for (auto child : Graph[node]){
            if (!visited[child.first]){
                if (child.second == 1)
                    q.push_back({child.first, 1});
                else    
                    q.push_front({child.first, 0});
            }
        }
    }

    // If the BFS completes without finding the target node.
    cout << "No path found" << endl;
}

int main(){
    cin >> nodes >> edges;
    
    // Initialize visited array to false.
    memset(visited, 0, sizeof(visited));

    for (int i = 0; i < edges; i++){
        int node1, node2;
        cin >> node1 >> node2;
        Graph[node1].push_back({node2, 0});
        Graph[node2].push_back({node1, 1});
    }

    cout << "Enter nodes to find the reversed number of edges" << endl;
    int node1, node2;
    cin >> node1 >> node2;
    bfs(node1, node2);
    return 0;
}
