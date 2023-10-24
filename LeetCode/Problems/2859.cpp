class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int ret = 0;
        for(int i=0; i<nums.size(); i++){
            int j = i;
            int count = 0;
            while(j && count <=k){
                if(j%2)
                    count++;
                j = j/2;
            }
            if(count == k)
                ret += nums[i];
        }
        return ret;
    }
};