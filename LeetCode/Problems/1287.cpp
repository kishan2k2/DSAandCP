class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int target = arr.size()/4;
        int count = 1;
        for(int i=1; i<arr.size(); i++){
            if(arr[i]==arr[i-1])
                count++;
            else
                count = 1;
            if(count>target)
                return arr[i];
        }   
        return arr[0];
    }
};