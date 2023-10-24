class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int countOne = 0;
        for(auto i:s)
            if(i=='1')
                countOne++;
        cout<<countOne<<endl;
        if(countOne){
            s[s.length()-1] = '1';
            countOne--;
        }
        for(int i=0; i<s.length()-1; i++){
            if(countOne){
                countOne--;
                s[i] = '1';
            }
            else
                s[i] = '0';
        }
        return s;
    }
};