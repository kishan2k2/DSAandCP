#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int count = 0;

    for (int i = 1; i <= sqrt(2 * n); i++) {
        if ((2 * n) % i == 0) {
            ll sum = 2 * n / i;
            ll temp = (i - 1) * k;
            if (sum - temp != 0 && (sum - temp) % 2 == 0) {
                count++;
            }

            // Check for a different factor (avoiding duplicate counts)
            if (i != 2 * n / i) {
                sum = i;
                temp = (2 * n / i - 1) * k;
                if (sum - temp != 0 && (sum - temp) % 2 == 0) {
                    count++;
                }
            }
        }
    }
    int sum = 0;
    for(int i = 0; sum<n; i+=k)
        sum += i;
    // cout<<"sum is "<<sum<<endl;
    if(sum==n){
        count++;}

    cout << count << endl;

    return 0;
}