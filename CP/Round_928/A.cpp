#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    map<char, int> freq;
    string s;
    cin>>s;
    for(auto i:s)
        freq[i]++;
    if(freq['A']>freq['B'])
        cout<<'A'<<endl;
    else
        cout<<'B'<<endl;
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
