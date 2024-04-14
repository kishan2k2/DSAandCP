class Solution {
private:
    bool prime(int temp){
        if(temp == 1)
            return false;
        for(int i=2; i<=temp/2; i++)
            if(temp%i == 0)
                    return false;
        return true;
    }
public:
    int maximumPrimeDifference(vector<int>& nums) {
        int first = 0, second = nums.size()-1;
        for(; first<=second; first++){
            if(prime(nums[first]))
                break;
        }
        for(; second>=first; second--)
            if(prime(nums[second]))
                break;
        // cout<<first<<" "<<second<<endl;
        // cout<<nums[first]<<" "<<nums[second]<<endl;
        return second-first;
    }
};