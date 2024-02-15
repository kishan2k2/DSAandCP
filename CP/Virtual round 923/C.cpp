#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    map<int, int> mapping;
	int count = 0;
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0; i<n; i++){
		int temp;
		cin>>temp;
		v[i] = temp;
		mapping[temp]++;
	}
	int maxi = INT_MIN;
	for(auto i:mapping){
		count += i.second;
		maxi = max(maxi, i.second);
	}cout<<endl<<count-maxi<<endl;
	for(int i=1; i<n-1; i++){
		if(v[i-1]==v[i+1] && v[i-1]!=v[i])
			count++;
	}
	cout<<count-maxi<<endl<<endl;
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
