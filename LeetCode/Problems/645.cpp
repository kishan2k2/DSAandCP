#define ll long long
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> result;
        sort(nums.begin(), nums.end());
        ll repeat, sum1 = nums[0];
        int sum2 = (nums.size()*(nums.size()+1))/2;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]==nums[i-1]){
                repeat = nums[i];
            }
            sum1 += nums[i];
        }
        cout<<sum2<<" "<<sum1;
        result.push_back(repeat);
        result.push_back(repeat + sum2 - sum1);
        return result;
    }
};