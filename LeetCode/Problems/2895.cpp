class Solution {
private:
//     Sort the tasks and then assign the max to the min processing time. and vice versa.
public:
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {
        sort(processorTime.begin(), processorTime.end());
        sort(tasks.begin(), tasks.end());
        int size = tasks.size();
        int ret = INT_MIN;
        for(int i=0; i<processorTime.size(); i++){
            for(int j=0; j<4; j++){
                ret = max(ret, tasks[size-i*4-j-1] + processorTime[i]);
            }
        }
        return ret;
    }
};