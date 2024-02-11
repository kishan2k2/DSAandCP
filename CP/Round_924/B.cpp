#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin>>n;
    vector<ll> v;
    map<int, bool> mapping;
    for(ll i=0; i<n; i++){
        ll temp;
        cin>>temp;
        if(!mapping[temp])
            v.push_back(temp);
        mapping[temp] = true;
    }
    // for(auto i:v)
    //     cout<<i<<" ";
    sort(v.begin(), v.end());
    ll s = 0, maxi = 1;
    for(ll i=1; i<v.size(); i++){
        ll diff = v[i] - v[s];
        if(diff<n){
            maxi = max(maxi, i-s+1);
        }
        else if(diff!=0)
            s++;
    }
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
