#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin>>n;
    long long is_negitive = 0, tot_sum = 0, mini = INT_MAX;
    while(n--){
        long long temp;
        cin>>temp;
        if(temp<0)
            is_negitive++;
        mini = min(mini, abs(temp));
        tot_sum += abs(temp);
    }
    if(is_negitive%2==0)
        cout<<tot_sum<<endl;
    else    
        cout<<tot_sum-2*mini<<endl;
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
