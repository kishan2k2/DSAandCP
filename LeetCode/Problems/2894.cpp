class Solution {
public:
    int differenceOfSums(int n, int m) {
        int sum = 0;
        int i=n/m;
        while(i){
            sum = sum + m*i;
            i--;
        }
        cout<<sum<<endl;
        return (n*(n+1))/2 - 2*sum;
    }
};