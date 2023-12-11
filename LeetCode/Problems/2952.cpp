class Solution {
public:
    int minimumAddedCoins(vector<int>& coins, int target) {
        sort(coins.begin(), coins.end());
    long long reachable = 0;  // Use long long to avoid integer overflow
    int additions = 0;

    for (int coin : coins) {
        if (coin <= reachable + 1) {
            reachable += coin;
        } else {
            while (reachable + 1 < coin) {
                reachable += reachable + 1;
                additions += 1;
            }

            reachable += coin;
        }
    }

    while (reachable < target) {
        reachable += reachable + 1;
        additions += 1;
    }

    return additions;
    }
};