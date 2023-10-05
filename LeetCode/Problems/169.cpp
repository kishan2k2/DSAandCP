class Solution {
private:
    // Finding the majority of an array in one single iteration.
public:
    int majorityElement(vector<int>& nums) {
        int curr = nums[0], count = 0;
        for(auto i:nums){
            cout<<curr<<" "<<count<<endl;
            if(count==0){
                count = 1;
                curr = i;
            }
            else if(i==curr)
                count++;
            else
                count--;
        }
        return curr;
    }
};