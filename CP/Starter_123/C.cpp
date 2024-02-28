#include<bits/stdc++.h>
using namespace std;
#define  ll long long
void find(vector<ll> v, map<ll, bool> mapping, ll target){
    int s = 0, e = 0;
    for(int i=0; i<v.size(); i++){
        for(int j = i+1; j<v.size(); j++){
            if(v[i] + v[j] == target){
                s = i;
                e = j;
            }
        }
    }
    cout<<v[s]<<" ";
    for(int i=0; i<v.size(); i++){
        if(i!=s && i!=e)
            cout<<v[i]<<" ";
    }
    cout<<v[e]<<endl;
}
void solve(){
    ll n, ans = 0, x, q;
    cin>>n>>q;
    vector<ll> v;
    map<ll, bool> mapping;
    while(n--){
        ll temp;
        cin>>temp;
        ans += temp*2;
        v.push_back(temp);
    }
    for(ll i=0; i<v.size(); i++){
        for(ll j = i+1; j<v.size(); j++){
            mapping[v[i] + v[j]] = true;
        }
    }
    while(q--){
        cin>>x;
        if(!mapping[ans-x])
            cout<<"-1"<<endl;
        else{
            find(v, mapping, ans-x);
        }
        
    }
}

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--){
	    solve();
	   // cout<<endl;
	}
	return 0;
}
