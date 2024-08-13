#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n, q;
    cin>>n>>q;
    string a, b;
    cin>>a>>b;
    while(q--){
        long long ans = 0;
        int l, r;
        cin>>l>>r;
        map<char, int> mapping;
        for(int i=l-1; i<r; i++){
            mapping[a[i]]++;
            mapping[b[i]]++;
        }
        long long count = 0;
        for(auto i:mapping)
            if((i.second)%2)
                count++;
        cout<<count/2<<endl;
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
