#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    int m = v.back(); // Maximum value in the vector
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    for(int i = 0; i <= n; i++){
        dp[i][0] = 1; // Initializing first column as 1 (sum 0 is always possible)
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(v[i-1] < j){
                dp[i][j] = dp[i-1][j];
            } else {
                dp[i][j] = dp[i-1][j] || dp[i-1][j - v[i-1]];
            }
        }
    }

    // Print the DP table (for debugging purposes)
    for(const auto& row : dp){
        for(int val : row){
            cout << val << " ";
        }
        cout << endl;
    }

    // Check if all sums from 1 to m can be formed
    bool canFormAll = true;
    for(int j = 1; j <= m; j++){
        if(dp[n][j] == 0){
            canFormAll = false;
            break;
        }
    }

    if(canFormAll)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    int sum = 1;
    if(v[0]!=1)
        cout<<"NO"<<endl;
    else{
        int i=1;
        for(; i<n; i++){
            if(sum<v[i]){    
                cout<<"NO"<<endl;
                break;
            }
            sum += v[i];
        }
        if(i==n)
            cout<<"YES"<<endl;
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
