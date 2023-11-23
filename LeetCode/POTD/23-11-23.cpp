class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> answer;
        for(int i=0; i<l.size(); i++){
            vector<int> v;
            for(int k=l[i]; k<=r[i]; k++){
                v.push_back(nums[k]);
            }
            sort(v.begin(), v.end());
            int diff = v[1] - v[0];
            int j=1;
            for(; j<v.size(); j++){
                if(v[j]-v[j-1]!=diff){
                    answer.push_back(false);
                    break;
                }
            }
            if(j==v.size())
                answer.push_back(true);
        }
        return answer;
    }
};