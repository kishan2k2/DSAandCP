#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    ll n;
    cin>>n;
    ll ans = 0;
    int count = 0;
    ll end = n/2+1;
    ans = ((end*(end-1))/2);
    ans = ans*2;
    if(n%2)
        ans += n/2+1;
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
