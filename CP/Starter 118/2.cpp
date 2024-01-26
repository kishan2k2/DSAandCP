#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n, k;
    cin>>n>>k;
    int temp = n/k;
    for(int i=1; i<=k; i++)
        cout<<temp*i<<" ";
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    solve();
	    cout<<endl;
	}
	return 0;
}
