class Solution {
public:
    int minimumAddedInteger(vector<int>& nums1, vector<int>& nums2) {
//         Finding the sequence
        vector<int> v;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        for(int i=1; i<nums2.size(); i++){
            v.push_back(nums2[i]-nums2[i-1]);
        }
        // for(auto i:v)
        //     cout<<i<<" ";
        // cout<<endl;
        map<int, int> freq;
        for(auto i:nums1){
            freq[i]++;
        }
        int ans = INT_MAX;
        for(auto i:nums1){
            map<int, int> temp = freq;
            int j=0;
            int s = i;
            temp[i]--;
            // cout<<"Starting with "<<s<<" "<<endl;
            for(; j<v.size(); j++){
                if(temp[s+v[j]]!=0){
                    // cout<<"For "<<s<<" "<<s+v[j]<<" Exist "<<temp[s+v[j]]<<endl;
                    temp[s+v[j]]--;
                    s = s + v[j];
                }
                else
                    break;
            }
            if(j==v.size()){
                ans = min(ans, nums2[0]-i);
            }
        }
        return ans;
    }
};