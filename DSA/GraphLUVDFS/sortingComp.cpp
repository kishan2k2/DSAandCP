#include<bits/stdc++.h>
using namespace std;
// a>b says that the first element should be greater than the second element.
// Sorting in descending order.
static bool comparator(int a, int b){
    return a>b;
}
int main(){
    vector<int> v{1, 4, 3};
    sort(v.begin(), v.end(), comparator);
    for(auto i:v)
        cout<<i<<" ";
    return 1;
}