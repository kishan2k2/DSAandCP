#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin>>n;
    vector<int> v(n, 0);
    for(int i=0; i<n; i++) cin>>v[i];
    int alice = 0, bob = 0, ans = 0;
    int s = 0, e = n-1;
    while(s <= e){
        // cout<<"ALICE BOB "<<alice<<" "<<bob<<endl;
        if(alice == bob){
            // cout<<"Same at "<<s<<" "<<e<<endl;
            ans = (n - e - 1) + s;
            if(s!=e){
            alice += v[s++];
            bob += v[e--];}
            else break;
        }
        else if(alice < bob){
            // cout<<"Alice turn"<<endl;
            alice += v[s++];
        }
        else{
            // cout<<"BOB turn"<<endl;
            bob += v[e--];
        }
    }
    if(alice == bob){
            // cout<<"Same at "<<s<<" "<<e<<endl;
            ans = (n - e - 1) + s;
        }
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
