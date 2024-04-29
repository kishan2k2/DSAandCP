#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    map<char, bool> visited;
    map<char, int> freq;
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(auto i:s)
        freq[i]++;
    int ans = freq.size();
    int ret = INT_MIN;
    for(int j=0; j<s.length()-1; j++){
        char i = s[j];
        freq[i]--;
        if(!visited[i])
            ans++;
        if(freq[i]==0)
            ans--;
        visited[i] = true;
        ret = max(ans, ret);
    }
    cout<<ret<<endl;
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
