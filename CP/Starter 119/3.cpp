#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n, q;
    cin>>n>>q;
    string s;
    cin>>s;
    ll count =1, maxi = 1;
    for(int i=1; i<s.size(); i++){
        if(s[i]==s[i-1])
            count++;
        else
            count = 1;
        maxi = max(maxi, count);
    }
    for(int i=0; i<q; i++){
        char temp;
        cin>>temp;
        s += temp;
    }
    for(int i=n; i<s.size(); i++){
        cout<<maxi<<" ";
        if(s[i]==s[i-1])
            count++;
        else
            count = 1;
        maxi = max(maxi, count);
    }
    cout<<maxi<<" ";
    // char prev = s[n-1];
    // for(int i=0; i<q; i++){
    //     char temp;
    //     cin>>temp;
    //     if(temp == prev)
    //         count++;
    //     else{
    //         count = 1;
    //         prev = temp;
    //     }
    //     maxi = max(count, maxi);
    //     // cout<<"Prev and curr are "<<prev<<" "<<temp<<" Current value of temp is "<<count<<endl;
    //     cout<<maxi<<" ";
    // }
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
