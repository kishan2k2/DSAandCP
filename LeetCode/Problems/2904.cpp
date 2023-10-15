class Solution {
private:
    void Valid1(string s, int k, int first, int second, int count, vector<pair<string, int>>& valid1){
        for(; second<s.length(); second++){
            if(s[second]=='1')
                count++;
            while(count==k){
                // cout<<first<<' '<<second<<endl;
                valid1.push_back({s.substr(first, second-first+1), second-first});
                cout<<valid1.back().first<<" "<<valid1.back().second<<endl;
                first++;
                
                if(s[first-1]=='1')
                    count--;
            }
        }
    }
    void Valid2(vector<pair<string, int>> valid1, vector<string>& valid2){
        sort(valid1.begin(), valid1.end(), [](const auto &a, const auto &b) {
            return a.second < b.second;
        });
        valid2.push_back(valid1[0].first);
        cout<<valid1.back().second<<endl;
        for(int i=1; i<valid1.size(); i++){
            if(valid1[i].second==valid1[i-1].second)
                    valid2.push_back(valid1[i].first);
            else
                break;
        }
    }
public:
    string shortestBeautifulSubstring(string s, int k) {
        vector<pair<string, int>> valid1;
        Valid1(s, k, 0, 0, 0, valid1);
        if(valid1.empty())
            return "";
        vector<string> valid2;
        Valid2(valid1, valid2);
        // convert string to integers and then sort them and return the top;
        // vector<long long> ret;
        // for(auto i:valid2){
        //     ret.push_back(stoll(i));
        // }
        // long long mini = INT_MAX;
        // for(auto i:ret)
        //         mini = min(i, mini);
//         for(int j=0; j<valid2[0].size(); j++){
            
//         }
//         if(valid2.size()!=0)
//             return valid2[0];
    sort(valid2.begin(), valid2.end(), [](const std::string &a, const std::string &b) {
        return a < b;
    });
        
        return valid2[0];
    }
};