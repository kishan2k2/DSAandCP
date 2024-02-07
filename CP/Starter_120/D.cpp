#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int t;
    cin>>t;
    while(t--){
        ll x, y;
        cin>>x>>y;
        ll a=min(x, y), b = max(x,y);
        while(b!=0){
            if(a>b)
                swap(a, b);
            b = b%a;
        }
        cout<<a<<endl;
    }
	return 0;
}
