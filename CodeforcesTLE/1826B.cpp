#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin>>n;
    vector<ll> v;
    for(ll i=0; i<n; i++){
        ll temp;
        cin>>temp;
        v.push_back(temp);
    } 
    ll ans = abs(v.back()-v[0]);
    for(ll i=1; i<n/2; i++){
        ans = __gcd(ans, abs(v[i]-v[n-1-i]));
    }
    cout<<ans<<endl;
}

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--){
	    solve();
	    // cout<<endl;
	}
	return 0;
}
