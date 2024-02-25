class Solution {
#define ll long long
private:
    bool doRectanglesOverlap(const vector<int>& bottomLeft1, const vector<int>& topRight1,
                              const vector<int>& bottomLeft2, const vector<int>& topRight2) {
        if (topRight1[0] <= bottomLeft2[0] || topRight2[0] <= bottomLeft1[0]) {
            return false;
        }

        if (topRight1[1] <= bottomLeft2[1] || topRight2[1] <= bottomLeft1[1]) {
            return false;
        }

        return true;
    }
    int middle(int a, int b, int c){
        vector<int> v{a, b, c};
        sort(v.begin(), v.end());
        return v[1];
        
    } 
public:
    long long largestSquareArea(vector<vector<int>>& bottomLeft, vector<vector<int>>& topRight) {
        ll ans = 0;
        for (int i = 0; i < bottomLeft.size(); ++i) {
            for (int j = i; j < bottomLeft.size(); ++j) {
                if (i != j) {
                    if (doRectanglesOverlap(bottomLeft[i], topRight[i], bottomLeft[j], topRight[j])) {
                        // Calculate intermediate points
                        ll x5 = middle(bottomLeft[i][0], topRight[i][0], bottomLeft[j][0]);
                        ll y5 = max(bottomLeft[i][1], bottomLeft[j][1]);
                        ll x6 = min(topRight[i][0], topRight[j][0]);
                        ll y6 = middle(bottomLeft[i][1], topRight[i][1], topRight[j][1]);
                        
                        // Calculate ans using the given formula
                        ans = max(ans, static_cast<ll>(pow(min(abs(y5 - y6), abs(x5 - x6)), 2)));
                    }
                }
            }
        }
        return ans;
    }
};