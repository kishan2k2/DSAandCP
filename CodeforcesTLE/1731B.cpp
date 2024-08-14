#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;
vector<int> pre;
void solve(){
    ll n;
    cin>>n;
    // ll mod = 1e9 + 7;
    ll ans = pre[n-1];
    // Handling for n;
    ans = (ans + (n)*(n))%mod;
    // Printing answer;
    cout<<(2022*(ans))%mod<<endl;
}
void precompute(){
    pre.push_back(0);
    for(ll i=1; i<mod; i++){
        pre.push_back((pre[i-1] + (i*i) + (i*(i+1)))%mod);
    }
}
int main() {
	// your code goes here
	int t;
	cin>>t;
    precompute();
	while(t--){
	    solve();
	    // cout<<endl;
	}
	return 0;
}
