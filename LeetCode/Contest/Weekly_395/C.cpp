class Solution {
public:
    long long minEnd(int n, int x) {
        int temp = n-1;
        long long ans = x;
        int i=0;
        while(temp || x){
            if(x%2==0){
                ans += temp%2*pow(2, i);
                temp = temp/2;
            }
            x = x/2;
            i++;
        }
        return ans;
    }
};