class Solution {
public:
    int countWays(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        // map<int, int> mapping;
        vector<vector<int>> v;
        int count = 1;
        int i;
        for(i=1; i<nums.size(); i++){
            if(nums[i]!=nums[i-1]){
                vector<int> v1;
                v1.push_back(nums[i-1]);
                v1.push_back(count);
                v.push_back(v1);
                count++;
            }
            else{
                count++;
            }
        }
        vector<int> v1;
        v1.push_back(nums[i-1]);
        v1.push_back(count);
        v.push_back(v1);
        int ret = 1;
        if(nums[0]!=0)
            ret = 2;
        for(int i=0; i<v.size()-1; i++){
            if(v[i][1]>v[i][0] && v[i+1][0]>v[i][1])
                ret++;
        }
        return ret;
    }
};