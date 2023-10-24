class Solution {
private:
    // Do it using stack.
public:
    bool backspaceCompare(string s, string t) {
        stack<int> a;
        stack<int> b;
        for(auto i:s){
            if(i=='#'){
                if(!a.empty())
                    a.pop();
                continue;
            }
            cout<<i<<"";
            a.push(i);
        }
        cout<<endl;
        for(auto i:t){
            if(i=='#'){
                if(!b.empty())
                    b.pop();
                continue;
            }
            cout<<i;
            b.push(i);
        }
        if(a.empty() && b.empty())
            return true;
        if(a.size()!=b.size())
            return false;
        while(!a.empty() && !b.empty()){
            if(a.top()!=b.top())
                return false;
            a.pop();
            b.pop();
        }
        return true;
    }
};