class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        vector<vector<int>> v(200000);
        vector<int> result;
        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<nums[i].size(); j++){
                v[i+j].push_back(nums[i][j]);
            }
        }
        for(auto i:v){
            reverse(i.begin(), i.end());
            for(auto j:i)
                result.push_back(j);
        }
        return result;
    }
};