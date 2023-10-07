class Solution {
private:
    // Finding the optimal case when to use bricks. 
    // Do it using priority queue.
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int> pq;
        int sum = 0;
        for(int i=1; i<heights.size(); i++){
            if(heights[i]-heights[i-1]>0){
                sum += heights[i]-heights[i-1];
                pq.push(heights[i]-heights[i-1]);
                if(sum > bricks){
                    if(ladders == 0)
                        return i-1;
                    ladders--;
                    int top = 0;
                    if(!pq.empty()){
                        top = pq.top();
                        pq.pop();
                    }
                    sum = sum - top;
                }
            }
        }
        return heights.size()-1;
    }
};