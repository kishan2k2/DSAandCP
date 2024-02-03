class Solution {
private:
    vector<long long> maxSumAtIndex(const vector<int>& arr) {
        vector<long long> v;
        v.push_back(arr[0]);
        for (int i = 1; i < arr.size(); i++) {
            v.push_back(v.back() + arr[i]);
        }
        return v;
    }

    map<long long, vector<int>> indexMap(const vector<int>& arr) {
        int n = arr.size();
        map<long long, vector<int>> indices;

        for (int i = 0; i < n; ++i) {
            indices[arr[i]].push_back(i);
        }

        return indices;
    }

public:
    long long maximumSubarraySum(vector<int>& nums, int x) {
        int n = nums.size();
        vector<long long> maxSums = maxSumAtIndex(nums);
        map<long long, vector<int>> indices = indexMap(nums);
        long long maxi = LLONG_MIN;

        for (int i = 0; i < n; i++) {
            for (auto j : indices[x + nums[i]]) {
                long long a = max(i, j), b = min(i, j);
                if (b > 0)
                    maxi = max(maxi, maxSums[a] - maxSums[b - 1]);
                else
                    maxi = max(maxi, maxSums[a]);
            }
        }

        if (maxi == LLONG_MIN)
            return 0;

        return maxi;
    }
};
