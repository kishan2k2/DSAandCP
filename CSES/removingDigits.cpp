#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	int n;
    cin>>n;
    vector<int> dp(n+1, INT_MAX);
    dp[0] = 0;
    for(int i=1; i<=n; i++){
        int temp = i;
        while(temp){
            int digit = temp%10;
            temp = temp/10;
            if(digit==0)
                continue;
            dp[i] = min(dp[i], dp[i-digit] + 1);
        }
    }
    // for(int i=0; i<=n; i++){
    //     cout<<i<<" "<<dp[i]<<endl;
    // }
    cout<<dp[n]<<endl;
}
