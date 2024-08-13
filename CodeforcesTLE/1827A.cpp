#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin>>n;
    vector<ll> a, b;
    for(ll i=0; i<n; i++){
        ll temp;
        cin>>temp;
        a.push_back(temp);
    }
    for(ll i=0; i<n; i++){
        ll temp;
        cin>>temp;
        b.push_back(temp);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll j = 0, ans = 1;
    ll count = 0;
    int mod = 1e9 + 7;
    for(ll i=0; i<n; i++){
        ll num = a[i];
        for(; j<n; j++){
            if(b[j]>=a[i])
                break;
            else    
                count++;
        }
        ans = (ans*(count-i))%mod;
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
