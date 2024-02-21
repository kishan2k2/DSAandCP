#include<bits/stdc++.h>
using namespace std;
// #define int long long int
void solve(){
    int maxi = INT_MIN, ans;
    for(int i=1; i<=22; i++){
        int a, b;
        cin>>a>>b;
        a += b*20;
        if(a>maxi){
            ans = i;
        }
        maxi = max(a, maxi);
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
