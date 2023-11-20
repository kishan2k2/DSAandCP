class Solution {
public:
    int kthGrammar(int n, int k) {
        int count = 0;
        k = k-1;
        while(n>=2){
            if(k>=pow(2, n-1) && k<pow(2, n)){
                count++;
                k = k - pow(2, n-1);
            }
            n--;
        }
        cout<<k<<" "<<count;
        if(count%2){
            return !k;
        }
        else{
            return k;
        }
        // return 0;
    }
};
// 0-: 01
// 1-: 10
// There has to be some kind of a pattern.
// 0
// 01
// 0110
// 01101001
// 0110100110010110
// for every next of the iteration what is happening is that the previous terms are all iterated but 0s and 1s are being replaced.