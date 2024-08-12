#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin>>n;
    vector<ll> v, ps;
    map<ll, bool> freq;
    ll totSum = 0;
    for(int i=0; i<n; i++){
        ll temp;
        cin>>temp;
        v.push_back(temp);
        totSum += temp;
        ps.push_back(totSum);
        freq[totSum] = true;
    }
    ll maxi = 1;
    for(int i=0; i<ps.size()-1; i++){
        // cout<<ps[i]<<" ";
        maxi = max(maxi, __gcd(ps[i], ps[ps.size()-1]-ps[i]));
        // cout<<maxi<<endl;
    }
    // cout<<endl;
    cout<<maxi<<endl;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    solve();
	    // cout<<endl;
	}
	return 0;
}
