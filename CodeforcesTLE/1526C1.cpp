#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll fun(ll i, ll sum, unordered_map<ll, unordered_map<ll, ll>>& dp, vector<ll>& v) {
    if (i == v.size())
        return 0;
    
    if (dp[i].find(sum) != dp[i].end())  // If already computed
        return dp[i][sum];
    
    ll ans;
    if (v[i] >= 0) {
        ans = fun(i + 1, sum + v[i], dp, v) + 1;
    } else if (abs(v[i]) <= sum) {
        ans = max(fun(i + 1, sum + v[i], dp, v) + 1, fun(i + 1, sum, dp, v));
    } else {
        ans = fun(i + 1, sum, dp, v);
    }
    
    return dp[i][sum] = ans;
}

int main() {
    ll n;
    cin >> n;
    
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    unordered_map<ll, unordered_map<ll, ll>> dp;  // Use unordered_map instead of vector
    cout << fun(0, 0, dp, v) << endl;
}
