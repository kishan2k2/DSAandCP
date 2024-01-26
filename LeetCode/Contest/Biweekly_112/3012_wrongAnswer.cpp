class Solution {
private:
    void fill(map<int, int>& mapping, int n){
        int i = n;
        while(i){
            if(i%2)
                mapping[n]++;
            i = i/2;
        }
    }
public:
    bool canSortArray(vector<int>& nums) {
        int n = nums.size();
        map<int, int> store;
        for(int i=0; i<n; i++){
            for(int j=0; j<n-i-1; j++){
                if(nums[j]>nums[j+1]){
                    if(!store[nums[j]])
                        fill(store, nums[j]);
                    if(!store[nums[j+1]])
                        fill(store, nums[j+1]);
                    if(store[nums[j]]==store[nums[j+1]])
                        swap(nums[j], nums[j+1]);
                    else{
                        cout<<"Trying to swap "<<nums[j]<<": "<<store[nums[j]]<<" "<<nums[j+1]<<": "<<store[nums[j+1]];
                        return false;
                    }
                }
            }
        }
        for(auto i:store)
            cout<<i.first<<" "<<i.second<<endl;
        return true;
    }
};