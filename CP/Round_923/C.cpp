#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
    ll n, m, k;
    cin >> n >> m >> k;
    
    set<ll> v1, v2;

    for (ll i = 0; i < n; i++) {
        ll temp;
        cin >> temp;
        v1.insert(temp);  // Use insert() instead of push() for sets
    }

    for (ll i = 0; i < m; i++) {
        ll temp;
        cin >> temp;
        v2.insert(temp);  // Use insert() instead of push() for sets
    }

    map<int, bool> mapping;
    int count = 0;
    for (auto i : v1) {
        if (i <= k) {
            count++;
            mapping[i] = true;
        } else if (i > k / 2) {
            break;
        }
    }

    if (count < k / 2) {
        cout << "NO" << endl;
        return;
    }

    count = 0;

    for (auto i : v2) {
        if (i <= k) {
            count++;
            mapping[i] = true;
        } else if (i > k / 2) {
            break;
        }
    }

    if (count < k / 2) {
        cout << "NO" << endl;
        return;
    }

    for(int i = 1; i <= k; i++){
        if(mapping[i] == false){
            cout<<"NO"<<endl;
            return;
        }
    }

    cout << "YES" << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
