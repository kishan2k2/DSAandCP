#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n, x, count = 0;
    cin>>n>>x;
    if(x==1)
        x++;
    for(ll i = x; 2*i-2<=n; i++){
        cout<<" . ";
        ll one = 2*(x-1);
        ll two = 2*(i-x);
        ll three = one + two;
        if(n%three==0 || n%three==one/2){
            count++;
            cout<<"len is "<<i<<endl;
        }
    }
    cout<<count<<endl;
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
