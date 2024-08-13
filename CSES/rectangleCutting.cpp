#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int a, b;
    cin>>a>>b;
    int count = 0;
    while(a!=b){
        if(a>b){
            a = a - b;
            count++;
        }
        else{
            b = b - a;
            count++;
        }
    }
    cout<<count<<endl;
}

int main() {
	// your code goes here
    solve();
	// int t;
	// cin>>t;
	// while(t--){
	//     solve();
	//     // cout<<endl;
	// }
	return 0;
}
