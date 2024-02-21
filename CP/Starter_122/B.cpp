#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    ll n, m, x, y, l;
    cin>>n>>m>>x>>y>>l;
    ll a1 = (x-1)/l, b1 = (n-x)/l, a2 = (y-1)/l, b2 = (m-y)/l;
    cout<<(a1+b1+1)*(a2+b2+1)<<endl;
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
