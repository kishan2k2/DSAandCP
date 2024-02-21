#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    int n;
    cin>>n;
    int arr1[32] = {0};
    int arr2[32] = {0};
    int ans =0;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        int j=0, k = 0;
        while(temp){
            int div = temp%10;
            if(div==1)
                arr1[j++]++;
            else    
                arr2[k++]++;
            ans = max(arr1[j-1], arr2[k-1]);
            temp = temp/10;
        }
    }
    cout<<ans<<endl;
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
