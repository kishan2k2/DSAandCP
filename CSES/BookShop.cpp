#include <bits/stdc++.h>
using namespace std;

void fun(vector<int> cost, vector<int> pages, int i, int t, int page, int& maxi) {
    // Base case: if we've considered all books or budget becomes negative
    if (i >= cost.size() || t < 0) {
        return;
    }

    // Update the maximum pages read so far
    maxi = max(maxi, page);
    cout << "Current index: " << i << ", Current pages: " << page << ", Maximum pages so far: " << maxi << endl;

    // Consider the case where we pick the current book
    if (t - cost[i] >= 0) {
        fun(cost, pages, i + 1, t - cost[i], page + pages[i], maxi);
    }

    // Consider the case where we do not pick the current book
    fun(cost, pages, i + 1, t, page, maxi);
}

void solution() {
    int n, t;
    cin >> n >> t;
    vector<int> cost(n), pages(n);
    for (int i = 0; i < n; i++) {
        cin >> cost[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> pages[i];
    }

    int maxi = 0;  // Initialize to 0 since we can't have negative pages
    fun(cost, pages, 0, t, 0, maxi);
    cout << "Maximum pages that can be read: " << maxi << endl;
}

int main() {
    solution();
    return 0;
}
