#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	int ans = 1;
    vector<int> dp(2e5, 0);
    for(int i=0; i<t; i++){
        int temp;
        cin>>temp;
        dp[temp] = dp[temp-1] + 1;
        ans = max(ans, dp[temp]);
    }
    cout<<ans<<endl;
	return 0;
}
