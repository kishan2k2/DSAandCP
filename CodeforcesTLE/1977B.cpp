#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    vector<int> result;
    int num;
    cin>>num;
    while(num!=0){
        // Check if the last bit is set;
        if(num&1){
            if((num&3) == 1){// The last two bits are 01 
                num--;
                result.push_back(1);
            } else{
                // The last two bits are 11
                num++; //It becomes 00 and carry = 1
                result.push_back(-1);
            }
        }else{
            result.push_back(0);
        }
        num = num/2;
    }
    cout<<result.size()<<endl;
    for(auto i:result)
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
