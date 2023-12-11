class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int target = edges.size();
        map<int, int> mapping;
        for(auto i:edges){
            mapping[i[0]]++;
            mapping[i[1]]++;
        }
        for(auto i:mapping){
            if(i.second==target)
                return i.first;
        }
        return 0;
    }
};