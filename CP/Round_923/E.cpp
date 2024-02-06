#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n, k;
	cin>>n>>k;
	ll add = n/k;
	ll count = n%k;
	vector<ll> v;
	int first = 1, second = n;
	for(ll i=1; i<=k/2; i++){
		v.push_back(first);
		v.push_back(second);
		first += add;
		second -= add;
		if(v.size()-1<=count)
			first++;
		if(v.size()<=count)
			second--;
	}
	// for(auto i:v)
	// 	cout<<i<<" ";
	// cout<<endl;
	ll size = v.size();
	for(ll i=size; i<n; i++){
		ll j = i - size;
		if(j%2==0)
			v.push_back(v[j]+1);
		else
			v.push_back(v[j]-1);
	}
	for(auto i:v)
		cout<<i<<" ";
	cout<<endl;
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
