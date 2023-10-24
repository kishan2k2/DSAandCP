class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int size = nums.size();
        int min = INT_MAX;
        for(int i=0; i<size; i++){
            for(int j=i+1; j<size; j++){
                for(int k=j+1; k<size; k++){
                    if(nums[k] < nums[j] && nums[i] < nums[j])
                        min = std::min(min, nums[i] + nums[j] + nums[k]);
                }
            }
        }
        if(min!=INT_MAX)
            return min;
        else
            return -1;
    }
};