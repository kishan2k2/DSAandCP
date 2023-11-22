#include <iostream>
using namespace std;

// Dono ka sum mein dono ka abs(subs-1) add kardo and return that.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a, b;
	    cin>>a>>b;
	    cout<<a+b+abs(a-b)-1<<endl;
	}
	return 0;
}
