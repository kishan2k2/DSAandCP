// Never seen a more easier problem 3 
class Solution {
public:
    long long flowerGame(int n, int m) {
//         Testing based on the hypothesis.
        int min = std::min(n, m);
        int max = std::max(n, m);
        int odd, even;
        if(min%2==0){
            odd = min/2;
            even = min/2;
        }
        else{
            even = min/2;
            odd = min/2 + 1;
        }
        long long ans = 0;
        for(int i=1; i<=max; i++){
            if(i%2)
                ans += even;
            else
                ans += odd;
        }
        return ans;
    }
};