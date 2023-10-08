class Solution {
private:
    // DP is quite obvious. For every index I can either take the dot product or move one.
    // For each iteration find the max and finally just return the max.
    // Got it the problem was right away it was 2D DP and not 1D DP.
public:
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        
        vector<vector<int>> dp(m, vector<int>(n, INT_MIN));
        int maxVal = INT_MIN;
        
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                dp[i][j] = nums1[i] * nums2[j];
                if(i > 0) dp[i][j] = max(dp[i][j], dp[i-1][j]);
                if(j > 0) dp[i][j] = max(dp[i][j], dp[i][j-1]);
                if(i > 0 && j > 0) dp[i][j] = max(dp[i][j], dp[i-1][j-1] + nums1[i] * nums2[j]);
                
                maxVal = max(maxVal, dp[i][j]);
            }
        }
        
        return maxVal;
    }
};