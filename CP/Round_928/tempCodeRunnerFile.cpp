#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin>>n;
    int mod = n%10;
    int sum = 0;
    n = n/10;
    int mul = n;
    while(n){
        sum += n%10;
        n = n/10;
    }
    cout<<mul<<" "<<mod<<" "<<sum<<endl;
    cout<<45*mul + ((mod)*(mod+1))/2 + (mod+1)*(sum) + ((mul-1)*(mul))/2<<endl;
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
