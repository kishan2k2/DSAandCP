class Solution {
public:
    int coinChange(vector<int>& coin, int amount) {
        vector<int> dp(amount+1, INT_MAX);
        dp[0] = 0;
        for(int i=0; i<coin.size(); i++){
            for(int j=coin[i]; j<=amount; j++){
                if (dp[j - coin[i]] != INT_MAX) {
                    dp[j] = min(dp[j], dp[j - coin[i]] + 1);
                }
            }
        }
        return (dp[amount] == INT_MAX) ? -1 : dp[amount];
    }
};