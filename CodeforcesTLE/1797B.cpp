#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n, k;
    cin>>n>>k;
    vector<vector<int>> v(n, vector<int>(n, 0));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int temp;
            cin>>temp;
            v[i][j] = temp;
        }
    }
    int count = 0;
    for(int i=0; i<n/2; i++){
        for(int j=0; j<n; j++){
            if(v[i][j]!=v[n-i-1][n-j-1])
                count++;
        }
    }
    if(n%2){
        int i = n/2;
        for(int j=0; j<n/2; j++){
            if(v[i][j]!=v[n-i-1][n-j-1])
                count++;
        }
    }
    // count = count*2;
    // cout<<"Operations "<<count<<" remaining "<<k-count<<endl;
    int cnt = count;
     if (cnt > k) {
    cout << "NO" << '\n';
    return;
  }
  if (n % 2 == 1 || (k - cnt) % 2 == 0) {
    cout << "YES\n";
  } 
  else {
    cout << "NO\n";
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
