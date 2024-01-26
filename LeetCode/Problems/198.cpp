class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        vector<int> dp;
        dp.push_back(nums[0]);
        dp.push_back(nums[1]);
        int maxi = dp[0];
        for(int i=2; i<nums.size(); i++){
            dp.push_back(maxi + nums[i]);
            maxi = max(dp[i-1], maxi);
            cout<<dp[i]<<" ";
        }
        return max(dp[nums.size()-1], dp[nums.size()-2]);
    }
};