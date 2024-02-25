class Solution {
private:
    bool check(string i){
        int s = 0, e = i.length()-1;
        while(s<e){
            if(i[s]!=i[e])
                return false;
            s++;
            e--;
        }
        return true;
    }
public:
    string firstPalindrome(vector<string>& words) {
        for(auto i:words)
            if(check(i))
                return i;
        return "";
    }
};