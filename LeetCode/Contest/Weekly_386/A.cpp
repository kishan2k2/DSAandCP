class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        map<int, int> freq;
        for(auto i:nums)
                freq[i]++;
        for(auto i:freq)
            if(i.second>2)
                return false;
        return true;
    }
};