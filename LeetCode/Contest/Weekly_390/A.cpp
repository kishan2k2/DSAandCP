class Solution {
public:
    int maximumLengthSubstring(string s) {
        int maxLen = 0;
        for(int i=0; i<s.length(); i++){
            map<char, int> mapping;
            int len = 0;
            for(int j = i; j<s.length(); j++){
                if(mapping[s[j]] <= 1){
                    len++;
                    mapping[s[j]]++;
                    maxLen = max(maxLen, len);
                    // cout<<s[j]<<" frequency "<<mapping[s[j]]<<endl;
                }
                else{
                    maxLen = max(maxLen, len);
                    break;
                }
            }
        }
        return maxLen;
    }
};