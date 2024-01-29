#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	// Your code here
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        v[i] = temp;
    }
    map<int, int> mapping;
    for(auto i:v)
        mapping[i]++;
    int target;
    for(auto i:mapping)
        if(i.second==1){
            target = i.first;
            break;
        }
    for(int i=0; i<v.size(); i++)
        if(v[i]==target)
            cout<<i+1<<endl;

    return 0;
}