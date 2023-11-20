class Solution {
private:
    // 
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> v;
        v.push_back(pref[0]);
        for(int i=1; i<pref.size(); i++){
            int x = pref[i]^pref[i-1];
            v.push_back(x);
        }
        return v;
    }
};