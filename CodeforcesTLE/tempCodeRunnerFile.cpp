#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin>>n;
    vector<int> a, b;
    int flag = true;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        a.push_back(temp);
    }
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        b.push_back(temp);
    }
    for(int i=1; i<n; i++){
        if(b[i]!=a[i-1]&&b[i]!=a[i]){
            flag = false;
            cout<<"Alice"<<endl;
            break;
        }
    }
    if(flag)
        cout<<"Bob"<<endl;
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
