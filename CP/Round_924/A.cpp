#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll x, y;
    cin>>x>>y;
  
    if(x%2==0 && x/2!=y){
        cout<<"Yes"<<endl;
    }
    else if(y%2==0 && y/2!=x){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
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
