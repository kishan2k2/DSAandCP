class Solution {
public:
    int countKeyChanges(string s) {
        std::transform(s.begin(), s.end(), s.begin(), ::tolower);
        int count = 0;
        for(int i=1; i<s.length(); i++)
            if(s[i]!=s[i-1])
                count++;
        return count;
    }
};