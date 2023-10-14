class Solution {
private:
//     Not the best solution but for the answer might come if I apply brute force from right and left and then take the min of it.
public:
    vector<string> getWordsInLongestSubsequence(int n, vector<string>& words, vector<int>& groups) {
        int curr1 = groups[0], curr2 = groups[n-1];
        vector<string> ret1;
        ret1.push_back(words[0]);
        vector<string> ret2;
        ret2.push_back(words[n-1]);
        for(int i=1; i<n; i++){
            // cout<<groups[i]<<endl;
            if(curr1!=groups[i]){
                curr1 = groups[i];
                cout<<"words[i]";
                ret1.push_back(words[i]);
            }
        }
        for(int i=n-2; i>=0; i--){
            if(curr2!=groups[i]){
                curr2 = groups[i];
                ret2.push_back(words[i]);
            }
        }
        return ret1.size()>ret2.size() ? ret2 : ret1;
    }
};