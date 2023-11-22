#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++){
	        cin>>arr[i];
	    }
	    int output = arr[0];
        // cout<<"first one is"<<endl;
	    for(int i=1; i<n; i++){
	        output = output^arr[i];
	       // cout<<output<<" ";
	    }
	    int maxi = output;
	   // cout<<"Second one is "<<endl;
	    for(int i=0; i<n; i++){
	        maxi = min(maxi, output^arr[i]);
	       // cout<<output<<" ";
	    }
	    cout<<maxi<<endl;
	}
	return 0;
}
