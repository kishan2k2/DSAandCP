#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr;
        for(int i=0; i<n; i++){
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }
        vector<int> count(n+1, 0);
        vector<vector<int>>dp(n, vector<int>(n, 0));
        for (int i = 0; i < n; ++i) {
            for (int j = i; j < n; ++j) {
                if (i == j) {
                    dp[i][j] = arr[i];
                } else {
                    dp[i][j] = dp[i][j - 1] + arr[j];
                }
                int temp = dp[i][j];
                if(temp<=n)
                    count[temp]++;
            }
        }
        for(int i=1; i<=n; i++){
            cout<<count[i]<<" ";
        }
        cout<<endl;
    }
	return 0;
}
