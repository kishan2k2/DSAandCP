// Backtracking.
class Solution {
private:
    void solve(vector<int> candidate, int target, vector<int> rec, vector<vector<int>>& ret, int start){
        if(target == 0){
            ret.push_back(rec);
            return ;
        }
        for(int i=start; i<candidate.size(); ++i){
            int can = candidate[i];
            if(can<=target){
                rec.push_back(can);
                solve(candidate, target-can, rec, ret, i);
                rec.pop_back();
            }
        }
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target){
        vector<int> rec;
        vector<vector<int>> ret;
        int start = 0;
        solve(candidates, target, rec, ret, start);
        return ret;
    }
};