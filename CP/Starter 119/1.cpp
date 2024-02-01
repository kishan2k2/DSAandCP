#include<bits/stdc++.h>
using namespace std;
// #define int long long int
void solve(){
    int count = 0;
    for(int i=0; i<5; i++){
        int temp;
        cin>>temp;
        count += temp;
    }
    if(count>=4)    
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    solve();
	    cout<<endl;
	}
	return 0;
}
