#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool fun(int i, int j, int k, int val, int target, vector<vector<int>>& v, int n){
    if(val==target)
        return true;
    if(i<n && (val|v[0][i])<=target)
        if(fun(i+1, j, k, val|v[0][i], target, v, n))
            return true;
    if(j<n && (val|v[1][j])<=target)
        if(fun(i, j+1, k, val|v[1][j], target, v, n))
            return true;
    if(k<n && (val|v[0][k])<=target)
        if(fun(i, j, k+1, val|v[0][k], target, v, n))
            return true;
    return false;
}
void solve(){
    ll n, x, ans = 0, sum = 0;
    cin>>n>>x;
    vector<vector<int>> v;
    for(int i=0; i<3; i++){
        vector<int> temp;
        for(int i=0; i<n; i++){
            int t;
            cin>>t;
            temp.push_back(t);
        }
        for(int j = 0; j < n; j++) {
                if((x | temp[j]) != x) break ;
                sum |= temp[j];
            }
        v.push_back(temp);
    }
    // cout<<sum<<endl;
    if(sum == x)
        cout<<"Yes"<<endl;
    else    
        cout<<"No"<<endl;
    // for(auto i:v){
    //     for(auto j:i)
    //         cout<<j<<" ";
    //     cout<<endl;
    // }
    // int target = x, val = 0, i = 0, j = 0, k = 0;
    // if(fun(i, j, k, val, target, v, n))
    //     cout<<"Yes"<<endl;
    // else    
    //     cout<<"No"<<endl;
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
