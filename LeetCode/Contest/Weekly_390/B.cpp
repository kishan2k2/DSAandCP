class Solution {
public:
    int minOperations(int k) {
        int maxi = INT_MAX;
        for(int i=1; i<=k; i++){
            int sum = (i-1) + k/i + (k%i!=0) - 1;
            maxi = min(maxi, sum);
            // cout<<"For "<<i<<" "<<sum<<endl;
        }
        return maxi;
    }
};