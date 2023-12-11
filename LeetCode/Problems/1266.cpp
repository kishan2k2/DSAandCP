class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int answer = 0;
        for(int i=1; i<points.size(); i++){
            int first = abs(points[i][0]-points[i-1][0]);
            int second = abs(points[i][1]-points[i-1][1]);
            answer += max(first, second);
        }
        return answer;
    }
};