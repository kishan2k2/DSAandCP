class Solution {
public:
    string largestOddNumber(string num) {
        int i=num.size()-1;
        for(; i>=0; i--){
            if((num[i]-'0')%2==1)
                break;
        }
        if(i==-1)
            return "";
        return num.substr(0, i+1);
    }
};