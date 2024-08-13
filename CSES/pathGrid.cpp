#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	int n;
    cin>>n;
    vector<vector<char>> v;
    for(int i=0; i<n; i++){
        vector<char> temp;
        for(int j=0; j<n; j++){
            char input;
            cin>>input;
            temp.push_back(input);
        }
        v.push_back(temp);
    }
    // for(auto i:v){
    //     for(auto j:i)
    //         cout<<j<<" ";
    //     cout<<endl;
    // }
    vector<vector<int>> dp(n, vector<int>(n, 0));
    dp[0][0] = 1;
    if(v[0][0]=='*'){
        cout<<0<<endl;
        return 0;
    }
    int mod = 1e9+7;
    for(int i=1; i<n; i++){
        if(v[i][0]=='*')
            dp[i][0] = 0;
        else    
            dp[i][0] = dp[i-1][0];
    }
    for(int i=1; i<n; i++){
        if(v[0][i]=='*')
            dp[0][i] = 0;
        else    
            dp[0][i] = dp[0][i-1];
    }
    for(int i=1; i<n; i++){
        for(int j=1; j<n; j++){
            if(v[i][j]=='*')
                dp[i][j] = 0;
            else{
                dp[i][j] = (dp[i-1][j]+dp[i][j-1])%mod;
            }
        }
    }
    // for(auto i:dp){
    //     for(auto j:i)
    //         cout<<j<<" ";
    //     cout<<endl;
    // }
    cout<<dp[n-1][n-1]<<endl;
}