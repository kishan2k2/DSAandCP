#include<bits/stdc++.h>
using namespace std;
int main(){
    int nodes, edges;
    cin>>nodes>>edges;
    const int N = 1e3+10;
    vector<pair<int, int>> Graph[N];
    // I am following the zero order indexing, the input will be first order indexing but not the consideration.
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
    // He will definelty use set and I believe that set will also be having the same syntax.
    int orignalSum = 0;
    for(int i=0; i<edges; i++){
        int node1, node2, weight;
        cin>>node1>>node2>>weight;
        pq.push({weight, {node1, node2}});
        orignalSum += weight;
    }
    vector<bool> visited(nodes);
    while(!pq.empty()){
        auto top = pq.top();
        int wt = top.first;
        int n1 = top.second.first;
        int n2 = top.second.second;
        pq.pop();
        if(visited[n1-1] && visited[n2-1]) continue;
        visited[n1-1] = true;
        visited[n2-1] = true;
        Graph[n1-1].push_back({n2, wt});
    }
    int count = 0;
    int ans = 0;
    for(auto pairs:Graph){
        if(!--nodes) break;
        cout<<"For node "<<++count<<" neghbours and their wieghts are "<<endl;
        for(auto ele:pairs){
            cout<<ele.first<<" "<<ele.second<<endl;
            ans += ele.second;
        }   
    }
    cout<<"The total weight of the minimum spanning tree is "<<ans<<endl;
    cout<<"The orignal weight of the graph is "<<orignalSum<<endl;


    /*
    The standard input will be 
6 9
5 4 9
5 1 4
4 1 1
1 2 2
4 3 5
4 2 3
3 2 3
3 6 8
2 6 7
    https://youtu.be/xDrLSOxaFrA?list=PLauivoElc3ghxyYSr_sVnDUc_ynPk6iXE&t=380
    */
}