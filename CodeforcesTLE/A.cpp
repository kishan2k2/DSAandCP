#include<bits/stdc++.h>
using namespace std;
#define ll long long
// void solve(){
    
// }
int maxi = INT_MIN;
void fun(vector<int> temp, int& ans, int i){
    if(i>=temp.size()){
        maxi = max(maxi, ans);
        return ;
    }
    int t = temp[i];
    ans += t;
    // cout<<"Picking "<<i<<" "<<ans<<endl;
    fun(temp, ans, i+2);
    ans -= t;
    // cout<<"Removing "<<i<<" "<<ans<<endl;
    fun(temp, ans, i+1);
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	vector<int> v;
    map<int, int> freq;
    for(int i=0; i<t; i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
        freq[temp]++;
    }
    vector<int> temp;
    for(auto i:freq){
        // cout<<i.first<<" "<<i.second<<endl;
        temp.push_back(i.first*i.second);
    }
    // cout<<"temp ";
    // for(auto i:temp)
    //     cout<<i<<" ";
    // cout<<endl;
    // cout<<endl;
    int ans = 0;
    fun(temp, ans, 0);
    cout<<maxi<<endl;
}
