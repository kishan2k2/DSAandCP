#include<bits/stdc++.h>
using namespace std;
// #define int long long int
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}
vector<int> getFactors(int number) {
    vector<int> factors;

    // Iterate from 1 to the square root of the number
    for (int i = 1; i * i <= number; ++i) {
        // If 'i' is a factor
        if (number % i == 0) {
            factors.push_back(i);

            // If both factors are distinct, add the other factor
            if (i != number / i) {
                factors.push_back(number / i);
            }
        }
    }

    return factors;
}
void solve(){
    int x, q;
    cin>>x>>q;
    vector<int> factor = getFactors(x);
    for(int i=0; i<q; i++){
        int count = 0;
        int p;
        cin>>p;
        for(auto i:factor){
            int temp_gcd = i;
            int temp_lcm = pow(i, p);
            if(temp_lcm%x!=0 || x%temp_gcd!=0)
                continue;
            vector<int> f = getFactors(temp_lcm);
            for(auto i:f){
                if(gcd(i, x)==temp_gcd && lcm(i, x)==temp_lcm)
                    count++;
            }
        }
        cout<<count<<endl;
    }
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
