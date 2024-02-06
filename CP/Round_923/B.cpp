#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    map<char, ll> mapping;
    for (char ch = 'a'; ch <= 'z'; ++ch) {
        mapping[ch] = 0; 
    }
    ll n;
    cin>>n;
    string s;
    for(int i=0; i<n; i++){
        ll temp;
        cin>>temp;
        for(auto i:mapping){
            if(i.second==temp){
                s += i.first;
                mapping[i.first]++;
                break;
            }
        }
    }
    cout<<s<<endl;
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
