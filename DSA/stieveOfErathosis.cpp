#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int N = 2e5;
bool prime[N];
void earthoris(){
    for (int p = 2; p * p <= N; p++) {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == false) {
            // Update all multiples of p greater than or
            // equal to the square of it numbers which are
            // multiple of p and are less than p^2 are
            // already been marked.
            for (int i = p * p; i <= N; i += p)
                prime[i] = true;
        }
    }
}