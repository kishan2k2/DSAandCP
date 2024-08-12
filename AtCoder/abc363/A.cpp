#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin>>n;
    if(n<=99)
        cout<<100-n<<endl;
    else if(n<=199)
        cout<<200-n<<endl;
    else if(n<=299)
        cout<<300-n<<endl;
    else    
        cout<<400-n<<endl;
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
	// return 0;
}
