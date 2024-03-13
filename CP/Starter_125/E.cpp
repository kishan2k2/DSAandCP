// Official solution, taken from solution section, not my solution

// Nice observation, I couldn't make it.

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    ll kitne_cases_hain;
    kitne_cases_hain=1;
    cin>>kitne_cases_hain;
    while(kitne_cases_hain--){          
        ll n; cin >> n;
        vector<ll> p1(n), p2(n);
        vector<ll> p1o, p1e, p2o, p2e;
        cin >> p1[0];
        p1e.push_back(p1[0]);
        for (ll i = 1; i < n; i++) {
            cin  >> p1[i];
            p1[i] += p1[i-1];
            if (i & 1) p1o.push_back(p1[i]);
            else p1e.push_back(p1[i]);
        }
        cin >> p2[0];
        p2e.push_back(p2[0]);
        for (ll i = 1; i < n; i++) {
            cin >> p2[i];
            p2[i] += p2[i-1];
            if (i & 1) p2o.push_back(p2[i]);
            else p2e.push_back(p2[i]);
        }
        sort(p1o.begin(), p1o.end());
        sort(p2o.begin(), p2o.end());
        sort(p1e.begin(), p1e.end());
        sort(p2e.begin(), p2e.end());
        if (p1o == p2o and p1e == p2e and p1.back() == p2.back()) cout << "YES\n";
        else cout << "NO\n";
    }
	return 0;
}