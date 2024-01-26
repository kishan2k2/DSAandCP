#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n, m;
    cin>>n>>m;
    vector<int> v;
    int ans = 0;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        if(temp>=m)
            ans++;
        v.push_back(temp);
    }
    int sum = 0;
    for(auto i:v){
        if(i<m)
            sum += i;
        else
            sum = 0;
        if(sum>=m){
            ans++;
            sum = 0;
        }
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
