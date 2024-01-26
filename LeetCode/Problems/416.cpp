class Solution {
private:
    bool solve(int ind, int target, vector<int> nums, vector<vector<int>> & dp){
        if(target==0)
            return 1;
        if(ind == 0)
            return nums[ind] == target;
        if(dp[ind][target]!=-1)
            return dp[ind][target];
        bool not_taken = solve(ind-1, target, nums, dp);
        bool taken = false;
        if(nums[ind]<=target)
            taken = solve(ind-1, target-nums[ind], nums, dp);
        return dp[ind][target] = taken || not_taken;
    }
public:
    bool canPartition(vector<int>& nums) {
        // Trying memoisation for the first time.
        int target = 0;
        for(auto i:nums)
            target += i;
        if (target % 2 == 1)
            return false;
        else {
            int k = target / 2;

            // Create a DP table with dimensions n x k+1 and initialize with -1
            vector<vector<int>> dp(nums.size(), vector<int>(k + 1, -1));

            // Call the subsetSumUtil function to check if it's possible to partition
            return solve(nums.size() - 1, k, nums, dp);
        }
    }
};