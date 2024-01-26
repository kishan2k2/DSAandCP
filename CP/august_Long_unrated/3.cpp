#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x, y, z;
	    cin>>x>>y>>z;
	    int s1, s2;
	    if(z%x){
	        s1 = z/x + 1;
	    }
	    else
	        s1 = z/x;
	   s2 = z/y;
	   cout<<s1+s2<<endl;
	}
	return 0;
}
