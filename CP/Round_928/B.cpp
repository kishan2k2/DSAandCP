#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin >> n;
    int prev = 0, flag = 0;
	string ans;
    for(int i = 0; i < n; i++){
        int len = 0;
        for(int j = 0; j < n; j++){
            char temp;
            cin >> temp;
            if(temp == '1')
                len++;
        }
        if(len == prev && prev != 0 && flag == 0){
            ans = "SQUARE";
			flag = 1;
        }
        else if(prev!=0 && i!=0 && flag == 0){
            ans = "TRIANGLE";
			flag = 1;
        }
        prev = len;
    }
	cout<<ans<<endl;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
        // cout << endl;
    }
    return 0;
}
