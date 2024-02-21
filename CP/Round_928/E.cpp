#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n, k;
    cin>>n>>k;
    int flag = 0;
    int temp;
    if(n%2==0)
        temp = n/2;
    else    
        temp = n/2+1;
    if (k%temp==0)
        flag -= 1;
    cout<<(2*k-1)*(1+k/temp+flag)<<endl;
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
