#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int st = 0, e = n-1;
    while(st<=e){
        if(s[st]=='B' && s[e]=='B'){
            cout<<n-st-(n-e-1)<<endl;
            break;
        }
        else if(s[st]=='B')
            e--;
        else if(s[e]=='B')
            st++;
        else{
            st++;
            e--;
        }
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
