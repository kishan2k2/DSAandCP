#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n, t, p;
    cin>>n>>t>>p;
    vector<int> v;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        v.push_back(max(t-temp, 0));
        // cout<<v.back()<<endl;
    }
    sort(v.begin(), v.end());
    cout<<v[p-1]<<endl;
}

int main() {
	// your code goes here
    solve();
	// int t;
	// cin>>t;
	// while(t--){
	//     solve();
	//     // cout<<endl;
	// }
	// return 0;
}
