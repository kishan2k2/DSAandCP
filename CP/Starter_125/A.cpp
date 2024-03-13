#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int a, b;
    cin>>a>>b;
    if(a<50)
        cout<<'Z'<<endl;
    else if(b<50)
        cout<<'F'<<endl;
    else
        cout<<'A'<<endl;
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
