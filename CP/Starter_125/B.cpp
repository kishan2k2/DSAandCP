#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int countOne = 0, maxZero = 0, count = 0;
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(auto i:s){
        // cout<<typeid(i)<<" ";
        if(i=='1'){
            countOne++;
            maxZero = max(count, maxZero);
            count = 0;
        }
        else
            count++;
    }
    maxZero = max(count, maxZero);
    cout<<countOne+maxZero<<endl;
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