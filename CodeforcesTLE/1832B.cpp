#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n, k, sum = 0;
    cin>>n>>k;
    vector<ll> v;
    for(int i=0; i<n; i++){
        ll temp;
        cin>>temp;
        v.push_back(temp);
        sum += temp;
    }
    sort(v.begin(), v.end());
    int s = 0, e = v.size()-1, ans = 0;
    while(k--){
        if(s+1<v.size() && (v[s]+v[s+1])<v[e])
            ans += v[s]+v[s+1], s += 2;
        else    
            ans += v[e], e -= 1;
    }
    cout<<sum-ans<<endl;
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
