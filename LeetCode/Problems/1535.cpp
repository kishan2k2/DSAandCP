class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int maxi = max(arr[0], arr[1]);
        int count = 1;
        for(int i=2; i<arr.size(); i++){
            if(maxi>arr[i])
                count++;
            else
                count = 1;
            if(count==k)
                return maxi;
            maxi = max(maxi, arr[i]);
        }
        return maxi;
    }
};