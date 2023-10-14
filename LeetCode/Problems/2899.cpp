class Solution {
public:
    vector<int> lastVisitedIntegers(vector<string>& words) {
        vector<int> v;
        vector<int> result;
        int count = 0;
        for(auto i : words){
            if(i=="prev"){
                count++;
                if(count>v.size())
                        result.push_back(-1);
                else
                    result.push_back(v[v.size()-count]);
            }
            else{
                count = 0;
                int ch = stoi(i);
                v.push_back(ch);
            }
        }
        return result;
    }
};