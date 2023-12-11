class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> answer;
        for(int i=0; i<matrix[0].size(); i++)
            answer.push_back({matrix[0][i]});
        for(int i=1; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size(); j++){
                answer[j].push_back(matrix[i][j]);
            }
        }
        return answer;
    }
};