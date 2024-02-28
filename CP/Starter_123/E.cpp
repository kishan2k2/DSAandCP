#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    ll n;
    cin>>n;
    ll ans = (n*(n+1))/2 - 1 + n;
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
