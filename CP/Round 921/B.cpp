#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll x, n;
    cin>>x>>n;
    for(int i = x/n; i>=1; i--){
        if(x%i==0){
            cout<<i<<endl;
            break;
        }
    }
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
