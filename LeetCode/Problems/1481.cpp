class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int, int> mapping;
        for(auto i:arr)
            mapping[i]++;
        vector<int> v;
        for(auto i:mapping)
            v.push_back(i.second);
        sort(v.begin(), v.end());
        int sum = 0;
        int i=0;
        for(; i<v.size(); i++){
            if(sum+v[i] <=k)
                sum += v[i];
            else
                break;
        }
        return v.size()-i;
    }
};