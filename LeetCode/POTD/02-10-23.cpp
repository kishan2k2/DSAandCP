class Solution {
public:
    bool winnerOfGame(string colors) {
        int countA = 0, countB = 0;
        for(int i=1; i<colors.size()-1; i++){
            if(colors[i-1] == colors[i] && colors[i+1] == colors[i]){
                if(colors[i]=='A')
                    countA++;
                else
                    countB++;
            }
        }
        cout<<countA<<" "<<countB;
        if(countA-1 >= countB && countA!=0)
            return true;
        else
            return false;
    }
};