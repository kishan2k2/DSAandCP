class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& cost) {
        int lastday = days[days.size()-1];
        vector<int> dp(lastday+1, 0);
        int j=0;
        for(int i=1; i<=lastday; i++){
            if(i<days[j])
                dp[i] = dp[i-1];
            else{
                j++;
                dp[i] = min({dp[i-1] + cost[0], dp[max(0, i-7)] + cost[1], dp[max(0, i-30)] + cost[2]});
            }
        }
        return dp[lastday];
    }
};