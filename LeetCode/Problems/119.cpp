class Solution {
private:
    long long fact(int n){
        if(n==1 && n==0)
            return 1;
        long long ret = 1;
        while(n>0){
            ret *= n;
            n--;
        }
        return ret;
    }
    int perm(int n, int i){
        int d = (fact(n-i)*fact(i));
        if(d!=0)
            return fact(n)/d;
        return 0;
    }
public:
    vector<int> getRow(int rowIndex) {
        // rowIndex++;
        vector<int> v;
        v.push_back(1);
        if(rowIndex==0)
            return v;
        for(int i = 1; i<rowIndex; i++){
            v.push_back(perm(rowIndex, i));
        }
        v.push_back(1);
        return v;
    }
};