#include<bits/stdc++.h>
using namespace std;
// #define int long long
void solve(){
    int n, k;
    cin>>n>>k;
    int min = INT_MAX;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        if(temp/k){
            min = std::min(min, temp%k);
        }
    }
    if(min == INT_MAX){
        cout<<"-1"<<endl;
        return ;
    }
    cout<<min<<endl;
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
