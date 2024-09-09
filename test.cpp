#include<bits/stdc++.h>
using namespace std;
#define ll long long

int maximumVapourRate(const vector<int>& vapourRate) {
    int n = vapourRate.size();
    int answer = INT_MIN;

    for(int window = 1; window <= n / 2; window++) {
        int currentSum1 = 0, currentSum2 = 0;

        // Calculate initial sums for the first possible window
        for(int it = 0; it < window; it++) {
            currentSum1 += vapourRate[it] * vapourRate[n - 1 - it];
            currentSum2 += vapourRate[it] * vapourRate[it + window];
        }

        answer = max(answer, max(currentSum1, currentSum2));

        // Sliding window to calculate for the rest of the array
        for(int i = 1; i <= n - 2 * window; i++) {
            currentSum1 = currentSum1 - vapourRate[i - 1] * vapourRate[n - i] 
                                    + vapourRate[i + window - 1] * vapourRate[n - window - i];
            currentSum2 = currentSum2 - vapourRate[i - 1] * vapourRate[i + window - 1] 
                                    + vapourRate[i + window - 1] * vapourRate[i + 2 * window - 1];

            answer = max(answer, max(currentSum1, currentSum2));
        }
    }

    return answer;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> vapourRate(n);
        for(int i = 0; i < n; i++) {
            cin >> vapourRate[i];
        }
        cout << maximumVapourRate(vapourRate) << endl;
    }
    return 0;
}