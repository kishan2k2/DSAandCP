#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    string s;
    cin>>s;
    if(s.length()==1){
        if(s[0]=='1')
            cout<<1<<endl;
        else    
            cout<<0<<endl;
    }
    else{
        s += s;
        int count = 0, maxi = 0;
        for(auto i:s){
            if(i=='1'){
                count++;
                maxi = max(count, maxi);
            }
            else    
                count = 0;
        }
        cout<<"The maximum ones are "<<maxi<<endl;
        int ans = maxi;
        for(int i=1; i<=maxi; i++){
            int temp = i*(maxi-i+1);
            ans = max(ans, temp);
        }
        cout<<ans<<endl;
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
