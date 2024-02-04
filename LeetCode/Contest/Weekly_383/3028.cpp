class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int sum = nums[0];
        int count = 0;
        for(auto i=1; i<nums.size(); i++){
            sum += nums[i];
            if(sum==0)
                count++;
        }
        return count;
    }
};