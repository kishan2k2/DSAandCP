#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n, ans = 0;
    cin>>n;
    while(n--){
        int temp;
        cin>>temp;
        ans += temp/2 + temp%2;
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
