#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    unordered_map<char, bool> unique;
    string s;
    cin>>s;
    for(auto i:s) unique[i] = true;
    int second = unique.size(), first = 0;
    bool flag = true;
    while(second < s.length()){
        if(s[first++]!=s[second++]){ 
            flag = false; 
            cout<<"NO"<<endl;
            break;
        }
    }
    if(flag) cout<<"YES"<<endl;
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
