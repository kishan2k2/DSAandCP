#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n, l, r;
    cin>>n>>l>>r;
    vector<ll> ele(n);
    for(int i=1; i<=n; i++){
        ele[i-1] = (r/i)*i;
    }
    bool flag = true;
    for(auto i:ele)
        if(i<l || i>r){
            flag = false, cout<<"NO"<<endl;
            break;
            }
    if(flag){
        cout<<"Yes"<<endl;
        for(auto i:ele)
            cout<<i<<" ";
        cout<<endl;
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
