class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int totalSum = 0;
        for(int i:nums)
            totalSum += i;
        int prevSum = 0, nextSum = totalSum;
        for(int i=0; i<nums.size(); i++){
            int temp = nums[i];
            nums[i] = i*nums[i] -prevSum + nextSum - (nums.size()-i)*nums[i];
            prevSum += temp;
            nextSum -= temp;
        }
        return nums;
    }
};