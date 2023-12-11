class Solution {
public:
    int totalMoney(int n) {
        int ans=0;
        for(int i=1; i<=n; i++){
            ans += i/7 + (i-1)%7 + 1;
        }
        return ans - n/7;
    }
};