#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin>>n;
    vector<int> v;
    int sum = 0;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
        sum += temp;
    }
    sum = sum/n;
    int target = 0;
    for(auto i:v){
        int temp = sum;
        target += i-temp;
        if(target<0){
            cout<<"NO"<<endl;
            return ;
        }
    }
    if(target>=0)
        cout<<"YES"<<endl;
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
