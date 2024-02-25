#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin>>n;
    vector<int> v;
    int s = -1, e = -1, flag = 1;
    int ans = 0, count = 0;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        if(temp==1 && flag){
            flag = 0;
            s = i;
            e = i;
        }
        if(flag == 0){
            if(temp==1){
                ans += count;
                count = 0;
            }
            else{
                count++;
            }
        }
    }
    cout<<ans<<endl;
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
