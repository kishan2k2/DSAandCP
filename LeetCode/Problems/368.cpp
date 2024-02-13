class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> dp;
        for(int i=0; i<nums.size(); i++){
            dp.push_back({nums[i]});
            vector<int> ans;
            int maxi = 0;
            for(int j=0; j<i; j++){
                if(nums[i]%nums[j]==0){
                    vector<int> temp = dp[j];
                    temp.push_back(nums[i]);
                    if(temp.size()>dp[i].size())
                        dp[i] = temp;
                }
            }
        }
        vector<int> temp;
        int maxi = 0;
        for(auto i:dp){
            if(i.size()>maxi){
                maxi = i.size();
                temp = i;
            }
        }
        return temp;
    }
};