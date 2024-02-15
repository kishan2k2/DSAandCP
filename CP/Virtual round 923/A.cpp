#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin>>n;
    if(n<28){
        cout<<'a'<<'a'<<char('a'+n-2-1)<<endl;
    }
    else if(n<53){
        cout<<'a'<<char('a'+n-27-1)<<'z'<<endl;
    }
    else{
        cout<<char('a'+n-52-1)<<'z'<<'z'<<endl;
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
