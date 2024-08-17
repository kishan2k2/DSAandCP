#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
vector<pair<int, int>> Graph[N];
bool visited[N];
const int INF = 1e9+7;
vector<int> Distance(N, INF);
int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int n1, n2, w;
        cin>>n1>>n2>>w;
        Graph[n1].push_back({n2, w});
    }
    int node;
    cout<<"Enter the source node"<<endl;
    cin>>node;
    // priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    set<pair<int, int>> pq;
    Distance[node] = 0;
    pq.insert({0, node});
    while(!pq.empty()){
        pair<int, int> top = *pq.begin();
        pq.erase(pq.begin());
        int distance = top.first;
        int node = top.second;
        visited[node] = true;
        for(auto childs:Graph[node]){
            int child = childs.first;
            int d = childs.second;
            if(visited[child]) continue;
            if(distance+d<Distance[child]){
                pq.insert({distance+d, child});
                Distance[child] = distance + d;
            }
        }
    }
    cout<<"For the node "<<node<<" These are the smallest distance to others "<<endl;
    for(int i=0; i<6; i++){
        cout<<"For "<<i+1<<" "<<Distance[i+1]<<endl;
    }
    return 0;
}

/*
Standard input of the graph
9
1 2 1
1 3 5
2 3 2
2 5 1
2 4 2
3 5 2
4 5 3
4 6 1
5 6 2
This is what the graph looks like-> https://youtu.be/5MEZXOyaRmk?list=PLauivoElc3ghxyYSr_sVnDUc_ynPk6iXE&t=532

*/