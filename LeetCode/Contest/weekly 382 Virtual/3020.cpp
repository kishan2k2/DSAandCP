// This took over 14 attempts to solve but worth it.
#define ll long long

class Solution {
private:
    int mod = 1e9;

    int check(ll num, map<ll, int>& mapping, unordered_set<ll>& uniqueSet) {
        int count = 1;
        if(num == 1){
            if(mapping[1]%2==0){
                cout<<mapping[1]<<endl;
                return mapping[1]-1;
            }
            cout<<mapping[1]<<endl;
            return mapping[1];
        }
        ll pow = num*num;
        while (mapping[pow] && mapping[num] > 1) {
            num = pow;
            pow *= pow;
            count += 2;
        }

        return count;
    }

public:
    int maximumLength(vector<int>& nums) {
        map<ll, int> mapping;
        unordered_set<ll> uniqueSet;

        for (auto i : nums) {
            mapping[i]++;
            uniqueSet.insert(i);
        }

        int maxi = 1;
        sort(nums.begin(), nums.end());
        for(auto i:nums)
                cout<<i<<" ";
        for (auto num : uniqueSet) {
            maxi = max(maxi, check(num, mapping, uniqueSet));
        }
        

        return maxi;
    }
};
