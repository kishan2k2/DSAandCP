#include<bits/stdc++.h>
using namespace std;
vector<int> x = {2, -2, 1, -1, 2, -2, 1, -1};
vector<int> y = {1, -1, 2, -2, -1, 1, -2, 2};
// I didn't do it with visited array thinking that I don't need it? But do I?
bool check(int sx, int sy){
    if(sx>0 && sx<8 && sy>0 && sy<8) return true;
    else return false;
}
void bfs(int sx, int sy, int dx, int dy){
    queue<pair<pair<int, int>, int>> q;
    q.push({{sx, sy}, 0});
    int flag = true;
    vector<vector<bool>> visited(8, vector<bool>(8, false));
    visited[sx][sy] = true;
    while(!q.empty()){
        sx = q.front().first.first;
        sy = q.front().first.second;
        int level = q.front().second;
        q.pop();
        if(sx==dx && sy==dy){
            flag = false;
            cout<<level<<endl;
            break;
        }
        for(int i=0; i<8; i++){
            int nx = sx + x[i];
            int ny = sy + y[i];
            if(check(nx, ny)){
                if(visited[nx][ny]) continue;
                visited[nx][ny] = true;
                q.push({{nx, ny}, level+1});
            }
        }
    }
    if(flag)
        cout<<-1<<endl;
}
void solve(){
    string pos1, pos2;
    cin>>pos1>>pos2;
    int sx, sy, dx, dy;
    sx = pos1[0]-'a';
    dx = pos2[0]-'a';
    sy = pos1[1]-'1';
    dy = pos2[1]-'1';
    // cout<<"Positions are "<<sx<<sy<<dx<<dy<<endl;
    bfs(sx, sy, dx, dy);
}
int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}