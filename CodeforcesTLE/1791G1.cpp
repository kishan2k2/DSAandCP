#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n, c;
    cin>>n>>c;
    vector<int> v;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        v.push_back(temp + i + 1);
    }
    sort(v.begin(), v.end());
    for(int i=0; i<n; i++){
        c -= v[i];
        if(c<0){
            cout<<i<<endl;
            break;
        }
        if(c==0){
            cout<<i+1<<endl;
             break;
        }
    }
    if(c>0)
        cout<<n<<endl;
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
