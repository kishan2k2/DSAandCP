#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <climits>

//Use the final approach of calculating all the sums in the same loop

class Solution {
public:
    long long minimumCost(std::vector<int>& arr, int k, int dist) {
        int n = arr.size();
        std::vector<int> maxHeap;

        // Initialize the max heap with the first d elements
        for (int i = 1; i <= dist+1; ++i) {
            maxHeap.push_back(arr[i]);
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        std::make_heap(maxHeap.begin(), maxHeap.end());

        long long ret = INT_MAX;

        // Process the remaining elements using a sliding window
        for (int i = 2; i <=n; ++i) {
            // Add the sum of the top k elements in the current window
            long long sum = 0;
            std::sort_heap(maxHeap.begin(), maxHeap.end(), std::greater<int>());
            sum = std::accumulate(maxHeap.begin(), maxHeap.begin() + k - 1, 0LL);
            // cout<<sum;
            ret = std::min(ret, sum);
            for(auto i:maxHeap)
                cout<<i<<" ";
            cout<<endl;

            // Remove the leftmost element in the window
            std::pop_heap(maxHeap.begin(), maxHeap.end());
            maxHeap.pop_back();

            // Add the current element to the max heap
            maxHeap.push_back(arr[i]);
            std::push_heap(maxHeap.begin(), maxHeap.end());
        }

        // Add the sum of the top k elements in the last window
        std::sort_heap(maxHeap.begin(), maxHeap.end(), std::greater<int>());
        long long sum = std::accumulate(maxHeap.begin(), maxHeap.begin() + k - 1, 0LL);
        ret = std::min(ret, sum);
        cout<<ret;

        return ret + arr[0];
    }
};
