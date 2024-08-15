#include<bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
int Graph[N][N];
int visited[N][N];
int timeTaken[N][N];
// This Can be used in finding the minimum time to rober all the houses.
bool check(int x, int y, int n){
    if(x>=0 && x<n && y>=0 && y<n)
        return true;
    else
        return false;
}
int main(){
    // Take the input of the graph.
    int n;
    cin>>n;
    int maxi = INT_MIN;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>Graph[i][j];
            maxi = max(maxi, Graph[i][j]);
        }
    }
    cout<<"Maxi is "<<maxi<<endl;
    queue<pair<int, int>> q;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(Graph[i][j]==maxi){
                q.push({i, j});
                visited[i][j] = true;
            }
        }
    }
    cout<<"Queue size is "<<q.size()<<endl;
    int X[] = {1, -1, 0, 0, 1, 1, -1, -1};
    int Y[] = {0, 0, 1, -1, 1, -1, 1, -1};
    int ans = 0;
    while(!q.empty()){
        pair<int, int> top = q.front();
        int x = top.first;
        int y = top.second;
        q.pop();
        for(int i=0; i<8; i++){
            int nx = x + X[i];
            int ny = y + Y[i];
            if(check(nx, ny, n) && !visited[nx][ny]){ 
                q.push({nx, ny});
                visited[nx][ny] = true;
                ans = timeTaken[x][y] + 1;
                timeTaken[nx][ny] = ans;
            }
        }
    }
    // Printing time taken matrix;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            cout<<timeTaken[i][j]<<" ";
        cout<<endl;
    }
    cout<<"The maximum time taken is "<<ans<<endl;
    return 0;
}