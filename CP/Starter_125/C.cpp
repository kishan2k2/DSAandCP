#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n, k;
    cin>>n>>k;
    string s;
    cin>>s;
    int countOnes = 0, end = 0;
    for(auto i:s)
        if(i=='1')
            countOnes++;
    if(countOnes>k){
        for(int i=0; i<s.length() && k>0; i++)
            if(s[i]=='1'){
                s[i] = '0';
                k--;
            }
        cout<<s<<endl;
    }
    else{
        for(int i=0; i<s.length()-k; i++)
            cout<<'0';
        cout<<endl;
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
