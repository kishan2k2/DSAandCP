#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    ll n, tot_sum;
    cin>>n;
    vector<ll> v;
    for(ll i=0; i<n; i++){
        ll temp;
        cin>>temp;
        v.push_back(temp);
        tot_sum += temp;
    }
    ll maxi = tot_sum;
    ll curr_sum = 0, ans = tot_sum;
    for(auto i:v){
        // cout<<"Current comparision is "<<curr_sum+2*i<<endl;
        ans = max(ans, curr_sum + 2*i);
        curr_sum += i;
    }
    cout<<ans<<endl;
    
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
