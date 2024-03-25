#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    int count = 0, sum = 0;
    for(int i=0; i<n; i++){
        if(v[i]==i+1)
            count++;
        else{
            sum += count/2 + count%2;
            count = 0;
        }
    }
    sum += count/2 + count%2;
    cout<<sum<<endl;
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
