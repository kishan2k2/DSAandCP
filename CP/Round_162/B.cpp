#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    vector<ll> negL, posL, negH, posH, health, pos;
    ll n, k;
    cin>>n>>k;
    for(ll i=0; i<n; i++){
        ll temp;
        cin>>temp;
        health.push_back(temp);
    }
    for(ll i=0; i<n; i++){
        ll temp;
        cin>>temp;
        if(temp<0){
            negL.push_back(abs(temp));
            negH.push_back(health[i]);
        }
        else{
            posL.push_back(temp);
            posH.push_back(health[i]);
        }
    }
    reverse(negL.begin(), negL.end());
    reverse(negH.begin(), negH.end());
    ll s = 0, e = 0, prevLen = 0, compare = 0, flag = 1;
    if(posL.empty()){
        posL.push_back(0);
        posH.push_back(0);
    }
    if(negL.empty()){
        negL.push_back(0);
        negH.push_back(0);
    }
    while(s<posL.size() && e<negL.size()){
        ll dis = 0, health = 0;
        if(!posL.empty() && s!=posL.size()){
            dis += posL[s];
            health += posH[s++];
        }
        if(!posH.empty() && e!=posH.size()){
            dis += negL[e];
            health += negH[e++];
        }
        compare += dis*k - prevLen - health;
        // cout<<"Compare is "<<compare<<endl;
        prevLen = dis;
        if(compare<=0){
            flag = 0;
            cout<<"NO"<<endl;
            break;
        }
    }
    if(flag)
        cout<<"YES"<<endl;
}

int main(){
	// your code goes here
	ll t;
	cin>>t;
	while(t--){
	    solve();
	    // cout<<endl;
	}
	return 0;
}
