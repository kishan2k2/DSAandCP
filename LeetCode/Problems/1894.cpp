class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        cout<<endl<<chalk.size()<<endl;
        k -= chalk[0];
        if(k<0)
            return 0;
        int sum = chalk[0];
        for(int i=1; i<chalk.size(); i++){
            k -= chalk[i];
            sum += chalk[i];
            if(k<0)
                return i;
        }
        k = k%sum;
        cout<<k<<endl;
        if(k==0)
            return 0;
        for(int i=0; i<chalk.size(); i++){
            k -= chalk[i];
            if(k<0)
                return i;
        }
        return 0;
    }
};