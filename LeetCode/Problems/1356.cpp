class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<vector<int>> v;
        for(auto i:arr){
            int x = i;
            int count = 0;
            while(x){
                if(x%2)
                    count++;
                x = x/2;
            }
            v.push_back({count, i});
        }
        sort(v.begin(), v.end());
        vector<int> x;
        for(auto i:v)
            x.push_back(i[1]);
        return x;
    }
};