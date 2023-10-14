class Solution {
private:
    // Even though the solution is quite different but I dont consider it to be so much different.
    // I did recursion which increase the complexity way too much.
    // They just do bfs for the counting of the neighbours.
    // Algorithm
    // 1- Iterate the 2d array.
    // 2- If one then count++ iterate it's neighbours using queue.
    // 3- Iterate till queue is empty.
    // 4- return the ocoutn
public:
    int numIslands(vector<vector<char>>& grid) {
        int count =0, check[]={0, 1, 0, -1, 0};
        queue<pair<int, int>> q;
        int m = grid.size(), n = grid[0].size();
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]=='1'){
                    count++;
                    grid[i][j] = '0';
                    q.push({i, j});
                    while(!q.empty()){
                        auto a = q.front();
                        q.pop();
                        for(int k=0; k<4; k++){
                            int first = a.first;
                            int second = a.second;
                            first += check[k];
                            second += check[k+1];
                            if(first<0 || first>=m || second>=n || second<0)
                                continue;
                            if(grid[first][second]=='1')
                                q.push({first, second});
                            grid[first][second] = 0;
                        }
                    }
                }
            }
        }
        return count;
    }
};