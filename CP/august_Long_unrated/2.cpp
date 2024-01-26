#include <iostream>
#include <queue>

using namespace std;

int main() {
	// your code goes here
	
    int t;
    
    
    
    cin>>t;
    while(t>0){
        int n,k,l;
        vector<int> a;
        long result=0;
        cin>>n>>k>>l;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            a.push_back(temp);
        }
        priority_queue<int> pq;
        for(int i=0;i<n;i++){
            pq.push(a[i]);
        }
        int count=1;
        while(!pq.empty()){
            if(count==l){
                
                result+=pq.top();
            }
            
            if(count==k){
                count=0;
            }
            count++;
            pq.pop();
            
        }
        
        cout<<result<<endl;
        t--;
    }
    
	return 0;
}