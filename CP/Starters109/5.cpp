// This is the wrong submission
#include <iostream>
#include<map>;
using namespace std;
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    long arr[n], arr2[n], col1[n], col2[n];
	    for(int i=0; i<n; i++)
	        cin>>arr[i];
	    for(int i=0; i<n; i++)
	        cin>>col1[i];
	    for(int i=0; i<n; i++)
	        cin>>arr2[i];
	    for(int i=0; i<n; i++)
	        cin>>col2[i];
	    map<int, bool> mapping;
	    for(auto i:col2)
	        mapping[i] = true;
	    for(int i=0; i<n; i++){
	        if(mapping[col1[i]]){
	            if(arr2[i]<arr[i]){
	                if(i==0)
	                    arr[i] = arr2[i];
	                if(arr2[i]<arr[i-1])
	                    arr[i] = arr2[i];
	            }
	        }
            // cout<<arr[i];
	    }
	    int flag = 0;
	    for(int i=1; i<n; i++){
	        if(arr[i-1]>arr[i]){
	            flag = 1;
	            cout<<"No"<<endl;
	            break;
	        }
	    }
	    if(!flag)
	        cout<<"Yes"<<endl;
	}
	return 0;
}
