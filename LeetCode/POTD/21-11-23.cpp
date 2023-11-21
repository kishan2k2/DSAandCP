class Solution {
public:
    int countNicePairs(vector<int>& nums) {
        long mod = 1e9 + 7;
        for(int i=0; i<nums.size(); i++){
            string s = to_string(nums[i]);
            reverse(s.begin(), s.end());
            int j = stoi(s);
            nums[i] -= j;
        }
        sort(nums.begin(), nums.end());
        long ans = 0, count = 1, i=0;
        for(; i<nums.size()-1; i++){
            if(nums[i]!=nums[i+1]){
                ans = (ans + ((count*(count-1))/2)%mod)%mod;
                count = 1;
            }
            else
                count++;
        }
        ans = (ans + ((count*(count-1))/2)%mod)%mod;
        return ans;
        // Handle the last count
    }
};