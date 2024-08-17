// In Graph I have suffered alot due to zero and one based indexing and be aware of that buddy in future.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>> weight(n, vector<int>(n, 0));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>weight[i][j];
        }
    }
    // cout<<"The weight matrix is "<<endl;
    // for(auto row:weight){
    //     for(auto ele:row)
    //         cout<<ele<<" ";
    //     cout<<endl;
    // }
    vector<long long> sum(n, 0);
    vector<int> delOrder(n);
    for(int i=0; i<n; i++)
        cin>>delOrder[i];
    reverse(delOrder.begin(), delOrder.end());
    // cout<<"Del order"<<endl;
    // for(auto i:delOrder)
    //     cout<<i<<endl;
    for(int k=0; k<delOrder.size(); k++){
        int considerNode = delOrder[k];
        // cout<<"ConsiderNode "<<considerNode<<endl;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                weight[i][j] = min(weight[i][j], weight[i][considerNode-1] + weight[considerNode-1][j]);
            }
        }
        // cout<<"New weight calculated"<<endl;
        long long answer = 0;
        for(int i=0; i<=k; i++){
            for(int j=0; j<=k; j++){
                answer += weight[delOrder[i]-1][delOrder[j]-1];
            }
        }
        // cout<<"New Answer calculated "<<answer<<endl;
        sum[k] = answer;
        // cout<<answer<<endl;
    }
    reverse(sum.begin(), sum.end());
    for(auto i:sum)
        cout<<i<<" ";
    cout<<endl;
}