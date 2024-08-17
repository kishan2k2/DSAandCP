#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
long long DP[N][N];
int main(){
    int n;
    cin>>n;
    int numNode = 6;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(i==j) DP[i][j] = 0;
            else DP[i][j] = INT_MAX;
        }
    }
    // for(int i=1; i<=numNode; i++){
    //     for(int j=1; j<=numNode; j++){
    //         cout<<DP[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // return 0;
    for(int i=0; i<n; i++){
        int n1, n2, w;
        cin>>n1>>n2>>w;
        DP[n1][n2] = w;
    }
    // for(int i=1; i<=numNode; i++){
    //     for(int j=1; j<=numNode; j++){
    //         cout<<DP[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // return 0;
    int mod = INT_MAX;
    for(int k = 1; k<=6; k++){
        for(int i=1; i<=numNode; i++){
            for(int j=1; j<=numNode; j++){
                DP[i][j] = min(DP[i][j], (DP[i][k] + DP[k][j]));
            }
        }
    }
    for(int i=1; i<=numNode; i++){
        for(int j=1; j<=numNode; j++){
            if(DP[i][j]==INT_MAX) cout<<"I ";
            else cout<<DP[i][j]<<" ";
        }
        cout<<endl;
    }
}