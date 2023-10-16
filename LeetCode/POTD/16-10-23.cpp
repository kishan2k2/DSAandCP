class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> v = {1};
        int j=0;
        while(j!=rowIndex){
            for(int i=j; i>=1; i--){
                v[i] = v[i] + v[i-1];
            }   
            v.push_back(1);
            j++;
        }
        return v;
    }
};