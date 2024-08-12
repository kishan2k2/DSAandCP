#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    bool flag = false;
    for(int i=n-1; i>=0; i--){
        int j=n-1;
        for(; j>=i; j--){
            if(__gcd(v[j], v[i])==1){
                flag = true;
                cout<<i+j+2<<endl;
                break;
            }
        }
        if(flag)
            break;
    }
    if(!flag)
        cout<<"-1"<<endl;
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
