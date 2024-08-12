#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n, k;
    cin>>n>>k;
    vector<vector<char>> v;
    for(int i=0; i<n; i++){
        vector<char> temp;
        for(int j=0; j<n; j++){
            char t;
            cin>>t;
            temp.push_back(t);
        }
        v.push_back(temp);
    }
    for(int i=0; i<n; i+=k){
        for(int j=0; j<n; j+=k){
            cout<<v[i][j];
        }
        cout<<endl;
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
