#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    vector<int> v;
    while(n--){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    int ans = v[0] + v[1];
    for(int i=2; i<v.size(); i++)
        ans += v[i]*2;
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
