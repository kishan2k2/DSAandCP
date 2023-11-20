class Solution {
public:
    int countVowelPermutation(int n) {
        vector<vector<long>> dp(n+1, vector<long>(5, 0));
        for(int i=0; i<5; i++)
            dp[0][i] = 1;
        int mod = 1e9 + 7;
        for(int i=1; i<n; i++){
            dp[i][0] = dp[i-1][1]%mod + dp[i-1][4]%mod + dp[i-1][2]%mod;
            dp[i][1] = dp[i-1][2]%mod + dp[i-1][0]%mod;
            dp[i][2] = dp[i-1][3]%mod + dp[i-1][1]%mod;
            dp[i][3] = dp[i-1][2]%mod;
            dp[i][4] = dp[i-1][2]%mod + dp[i-1][3]%mod;
            cout<<dp[i][0]<<" "<<dp[i][1]<<" "<<dp[i][2]<<" "<<dp[i][3]<<" "<<dp[i][4]<<" "<<endl;
        }
        return (dp[n-1][0] + dp[n-1][1] + dp[n-1][2] + dp[n-1][3] + dp[n-1][4])%mod;
    }
};