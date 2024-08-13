// # I could have handeleed it seperately Why try to do it all togeather.

#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n;
    cin>>n;
    vector<ll> a, b;
    for(ll i=0; i<n; i++){
        ll temp;
        cin>>temp;
        a.push_back(temp);
    }
    for(ll i=0; i<n; i++){
        ll temp;
        cin>>temp;
        b.push_back(temp);
    }
    ll s = -1, e = -1;
    for(ll i=0; i<n; i++){
        if(a[i]!=b[i]){
            if(s==-1)
                s = i;
            e = i;
        }
        else if(i!=a.size() && b[i]<=b[i+1]){
            if(s==-1)
                s = i;
            e = i;
        }
        else if(s!=-1)
            break;
    }
    cout<<++s<<" "<<++e<<endl;
}

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--){
	    solve();
	    // cout<<endl;
	}
	return 0;
}
