#include<bits/stdc++.h>
using namespace std;
int i = 1;
vector<int> X = {-1, 1, 0, 0, -1, 1, 1, -1};
vector<int> Y = {0, 0, 1, -1, -1, 1, -1, 1};
int dfs(vector<vector<char>> matrix, int x, int y){
    int ans = 1;
    char curr = matrix[x][y];
    for(int i=0; i<8; i++){
        int nx = x + X[i];
        int ny = y + Y[i];
        if(nx>=0 && nx<matrix.size() && ny>=0 && ny<matrix[0].size() && matrix[nx][ny]==curr+1){
            ans = dfs(matrix, nx, ny) + 1;
            return ans;
        }
    }
    return ans;   
}
int main(){
    int height, width;
    cin>>height>>width;
    if(height==0 && width==0)
        return 0;
    vector<vector<char>> matrix(height+1, vector<char>(width+1, 0));
    for(int i=0; i<height; i++){
        for(int j=0; j<width; j++){
            char temp;
            cin>>temp;
            matrix[i][j] = temp;
        }
    }
    if(matrix[0][0]!='A'){
        cout<<"Case "<<i++<<": "<<"0"<<endl;
    }
    else{
        cout<<"Case "<<i++<<": "<<dfs(matrix, 0, 0)<<endl;
    }
}