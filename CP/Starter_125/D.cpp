#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n, a = 0, b = 0, rem = 0;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    char turn = 'a';
    for(int i=0; i<n; i++){
        if(v[i]>1){
            if(i%2==0)
                turn = 'a';
            else
                turn = 'b';
            rem = n-i;
            break;
        }
        if(i%2)
            a++;
        else
            b++;
    }
    // cout<<"Turn is "<<turn<<" And score is "<<a<<" "<<b<<endl;
    int count = 0;
    for(auto i:v)
        if(i>1)
            count += i-2;
    // cout<<count<<endl;?
    // cout<<"rem is "<<rem<<endl;
    if(count%2==0){
        if(turn =='a')
            turn = 'b';
        else
            turn = 'a';
    }
    if(turn == 'a')
        b += rem;
    else
        a += rem;
    // cout<<"Score of alice and bob is "<<a<<" "<<b<<endl<<endl;
    if(a>b)
        cout<<"BOB"<<endl;
    else if(b>a)
        cout<<"ALICE"<<endl;
    else
        cout<<"DRAW"<<endl;
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
