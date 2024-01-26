class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        for(int i=1; i<triangle.size(); i++){
            // for j==0
            triangle[i][0] += triangle[i-1][0];
            for(int j=1; j<i; j++){
                triangle[i][j] += min(triangle[i-1][j], triangle[i-1][j-1]);
            }
            //for j==i
            triangle[i][i] += triangle[i-1][i-1];
        }
        int mini = INT_MAX;
        for(auto i:triangle[triangle.size()-1])
            mini = min(mini, i);
        return mini;
    }
};