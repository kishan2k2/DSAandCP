class Solution {
public:
    int minBitFlips(int start, int goal) {
        int count = 0;
        int a = start, b = goal;
        while(a){
            cout<<a%2<<" ";
            a = a/2;
        }
        cout<<endl;
        while(b){
            cout<<b%2<<" ";
            b = b/2;
        }
        while(start && goal){
            if(start%2!=goal%2)
                count++;
            start = start/2;
            goal = goal/2;
        }
        while(goal){
            if(goal%2)
                count++;
            goal = goal/2;
        }
        while(start){
            if(start%2)
                count++;
            start = start/2;
        }
        return count;
    }
};