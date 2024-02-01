#include<bits/stdc++.h>
using namespace std;
// #define int long long
void solve(){
    int n, k;
    cin>>n>>k;
    vector<int> v;
    v.push_back(1);
    int odd = 3;
    int even = 2;
    for(int i=1; i<n; i++){
        if(k==1){
            if(v.back()%2==0){
                if(even<=n){
                    v.push_back(even);
                    even += 2;
                }
                else{
                    v.push_back(odd);
                    odd += 2;
                }
            }
            else{
                if(odd<=n){
                    v.push_back(odd);
                    odd += 2;
                }
                else{
                    v.push_back(even);
                    even += 2;
                }
            }
        }
        else{
            if(v.back()%2==0){
                v.push_back(odd);
                odd += 2;
            }
            else{
                v.push_back(even);
                even += 2;
            }
            k--;
        }
    }
    for(auto i:v)
        cout<<i<<" ";
    cout<<endl;
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
