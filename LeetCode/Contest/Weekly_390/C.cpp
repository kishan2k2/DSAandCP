#define ll long long 
class Solution {
public:
    vector<long long> mostFrequentIDs(vector<int>& nums, vector<int>& freq) {
        vector<ll> answer;
        map<ll, ll> freqCount;
        priority_queue<pair<ll, ll>> pq;
        for(ll i=0; i<nums.size(); i++){
            ll num = nums[i];
            ll f = freq[i];
            freqCount[num] += f;
            pq.push({freqCount[num], num});
            while(!pq.empty()){
                pair<ll, ll> top = pq.top();
                ll one = top.first, second = top.second;
                // cout<<"For "<<second<<" freq is "<<one<<endl;
                if(freqCount[second]==one){
                    answer.push_back(one);
                    break;
                }
                else{
                    pq.pop();
                }
            }
        }
        return answer;
    }
};