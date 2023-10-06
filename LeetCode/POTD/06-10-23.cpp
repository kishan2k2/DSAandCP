class Solution {
public:
    int integerBreak(int n) {
        if(n<=3)
            return n-1;
        int rem = n%3;
        n = n/3;
        if(rem == 1){
            return pow(3, n-1)*4;
        }
        if(!rem)    
            rem = 1;
        return pow(3, n)*rem;
    }
};

// N = Sum of K integers where the product of K is max.
// 42 = 20 + 22/ 10 + 10 + 10 + 12/ 4 + 3 + 3 + 4 + 3 + 3 + 4 + 3 + 3 + 3 + 3 + 3 + 3
