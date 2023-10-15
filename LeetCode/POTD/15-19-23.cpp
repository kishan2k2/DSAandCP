// Brute force 
// class Solution {
// private:
//     // At each step the we can either move to left, right or stay i.e it is a recursion problem.
// public:
//     int numWays(int steps, int arrLen) {
//         vector<int> v(arrLen, 0);
//         // v[0] = 1;
//         stack<int> s;
//         s.push(0);
//         while(step--){
//             int size = s.size();
//             while(size--){
//                 int top = s.top();
//                 s.pop();
//                 if(top!=0)
//                     s.push(top-1);
//                 if(top!=arrLen-1)
//                     s.push(top+1);
//                 s.push(top);
//                 v[top]++;
//             }
//         }
//     }
// };
Correct solution but not at all optimise

class Solution {
private:
    // Couldn't even find out that it was a 2d DP question.
public:
    int numWays(int steps, int arrLen) {
        arrLen = min(steps, arrLen);
        vector<vector<int>> v(arrLen+1, vector<int>(steps+1, 0));
        v[0][0] = 1;
        v[1][0] = 1;
        const int MOD = 1e9 + 7;
        for(int j=1; j<steps; j++){
            for(int i=0; i<arrLen; i++){
                if(i!=0){
                    v[i][j] = (v[i][j] + v[i-1][j-1])%MOD;
                }
                if(i!=arrLen-1){
                    v[i][j] = (v[i][j] + v[i+1][j-1])%MOD;
                }
                v[i][j] = (v[i][j] + v[i][j-1])%MOD;
            }
        }
        return v[0][steps-1];
    }
};