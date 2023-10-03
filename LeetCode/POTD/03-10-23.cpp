class Solution {
private:
    int fact(int n){
        return (n*(n-1))/2;
    }
public:
    int numIdenticalPairs(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int res = 0, count = 1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]!=nums[i-1]){
                res += fact(count);
                count = 1;
            }
            else
                count++;
        }
        res += fact(count);
        return res;
    }
};