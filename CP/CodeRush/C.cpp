#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
int countPairs(int N) {
    int count = 0;

    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            // int factor = N / i;
            // Avoid counting the same factor twice
            // if (i <= factor) {
                count++;
            
        }
    }

    return count;
}
int main(){
    cout<<countPairs(3);
    return 0;
}
// I couldn't retrieve my third code, I couldnt solve the question but I was so close.
// I messed up with index values manupulation.