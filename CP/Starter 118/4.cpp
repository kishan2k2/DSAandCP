// Didn't do it in the contest but upsolved it.
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin>>n;
    int s;
    if(n%2)
        s = n/2 + 1;
    else
        s = n/2;
    int mini = INT_MAX, one = 0, two = n;
    for(int i=s; i<=n; i++){
        int temp = i^(n-i);
        // cout<<"xor of "<<i<<" and "<<n-i<<" is "<<temp<<endl;
        if(temp == n){
            mini = temp;
            one = min(i, n-i);
            two = max(i, n-i);
            break;
        }
    }
    cout<<one<<" "<<two<<endl;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}