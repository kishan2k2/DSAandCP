class Solution {
private:
    bool check(string word, int j){
        int k = 0;
        for(int i = j; i<word.length(); i++){
            if(word[i]!=word[k++])
                return false;
        }
        return true;
    }
public:
    int minimumTimeToInitialState(string word, int k) {
        for(int i=k; i<word.length(); i+=k){
            if(check(word, i))
                return (i)/k;
        }
        if(word.length()%k)
            return word.length()/k + 1;
        else
            return word.length()/k;
    }
};
