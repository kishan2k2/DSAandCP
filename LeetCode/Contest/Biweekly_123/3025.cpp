#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
private:
    bool compare(const std::vector<int>& a, const std::vector<int>& b) {
        if (a[0] != b[0]) {
            return a[0] < b[0];
        }
        return a[1] > b[1];
    }

    bool isWithinSquare(const std::vector<int>& diagonal1, const std::vector<int>& diagonal2, const std::vector<int>& point) {
        return (point[0] >= diagonal1[0] && point[0] <= diagonal2[0] && point[1] <= diagonal1[1] && point[1] >= diagonal2[1]);
    }

public:
    int numberOfPairs(std::vector<std::vector<int>>& v) {
        sort(v.begin(), v.end(), [this](const std::vector<int>& a, const std::vector<int>& b) {
            return compare(a, b);
        });

        int count = 0;
        for (int i = 0; i < v.size(); i++) {
            for (int j = i + 1; j < v.size(); j++) {
                if (v[j][0] >= v[i][0] && v[j][1] <= v[i][1]) {
                    vector<int> diagonal1 = {v[i][0], v[i][1]};
                    vector<int> diagonal2 = {v[j][0], v[j][1]};
                    
                    // Count the number of points within the square
                    int pointsWithinSquare = count_if(v.begin(), v.end(), [&](const auto& point) {
                        return isWithinSquare(diagonal1, diagonal2, point);
                    });

                    // If there are at least two points within the square, increment count
                    if (pointsWithinSquare == 2) {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};
