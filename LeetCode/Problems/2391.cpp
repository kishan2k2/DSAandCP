class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int ans = 0;
        int p=0, m=0, g=0;
        travel.push_back(travel[travel.size()-1]);
        for(int i = travel.size()-2; i>0; i--)
            travel[i] = travel[i-1];
        travel[0] = 0;
        for(int i=0; i<garbage.size(); i++){
            p += travel[i], m += travel[i], g += travel[i];
            for(auto j:garbage[i]){
                if(j=='P'){
                    ans += p + 1;
                    p = 0;
                }
                else if(j=='G'){
                    ans += g + 1;
                    g = 0;
                }
                else{
                    ans += m + 1;
                    m = 0;
                }
            }
        }
        return ans;
    }
};