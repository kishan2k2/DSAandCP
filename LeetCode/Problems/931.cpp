class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        for(int i=1; i<matrix.size(); i++){
            for(int j=0; j<matrix.size(); j++){
                int mini = matrix[i-1][j];
                if(j-1>=0)
                    mini = min(mini, matrix[i-1][j-1]);
                if(j+1<matrix.size())
                    mini = min(mini, matrix[i-1][j+1]);
                matrix[i][j] += mini;
            }
        }
        int ret = INT_MAX;
        for(auto i:matrix[matrix.size()-1])
            ret = min(ret, i);
        return ret;
    }
};