class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int count = 1, maxi = 1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]-nums[i-1]==0)
                continue;
            int currSign = (nums[i]-nums[i-1])/abs(nums[i]-nums[i-1]);
            count = 1;
            for(int j = i; j<nums.size(); j++){
                if(nums[j]-nums[j-1]==0)
                    break;
                int sign = (nums[j]-nums[j-1])/abs(nums[j]-nums[j-1]);
                // cout<<currSign<<" "<<sign<<endl;
                if(sign == currSign){
                    count++;
                    maxi = max(maxi, count);
                }
                else{
                    break;
                }
                // cout<<count<<endl;
            }
            // maxi = max(maxi, count);
        }
        return maxi;
    }
};