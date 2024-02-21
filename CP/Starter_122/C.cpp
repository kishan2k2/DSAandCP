#include<bits/stdc++.h>
using namespace std;
// #define int long long int
void solve(){
    int n;
    cin>>n;
    string ans = "";
    while(n--){
        int temp;
        cin>>temp;
        if(temp<=4)
            ans = "NO";
    }
    if(ans=="NO")
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
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
