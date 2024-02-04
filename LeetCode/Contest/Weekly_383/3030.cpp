class Solution {
private:
    bool check(const vector<vector<int>>& v, int threshold, int a, int b, int& sum) {
        for (int i = a; i < a + 3; i++) {
            for (int j = b; j < b + 3; j++) {
                if (i > a && abs(v[i - 1][j] - v[i][j]) > threshold) {
                    return false;
                }
                if (j > b && abs(v[i][j - 1] - v[i][j]) > threshold) {
                    return false;
                }
                if (i < a + 2 && abs(v[i + 1][j] - v[i][j]) > threshold) {
                    return false;
                }
                if (j < b + 2 && abs(v[i][j + 1] - v[i][j]) > threshold) {
                    return false;
                }
                sum += v[i][j];
            }
        }
        return true;
    }

    void update(vector<vector<int>>& sum, vector<vector<int>>& freq, int a, int b, int add) {
        for (int i = a; i < a + 3; i++) {
            for (int j = b; j < b + 3; j++) {
                freq[i][j]++;
                sum[i][j] += add / 9;
            }
        }
    }

    void transform(vector<vector<int>>& sum, vector<vector<int>>& freq, const vector<vector<int>>& v, int m, int n) {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (freq[i][j] == 0)
                    sum[i][j] = v[i][j];
                else {
                    sum[i][j] = sum[i][j] / freq[i][j];
                }
            }
        }
    }

public:
    vector<vector<int>> resultGrid(vector<vector<int>>& image, int threshold) {
        int m = image.size();
        int n = image[0].size();
        vector<vector<int>> sum(m, vector<int>(n, 0));
        vector<vector<int>> freq(m, vector<int>(n, 0));

        for (int i = 0; i <= m - 3; i++) {
            for (int j = 0; j <= n - 3; j++) {
                int add = 0;
                if (check(image, threshold, i, j, add)) {
                    update(sum, freq, i, j, add);
                }
            }
        }

        transform(sum, freq, image, m, n);
        return sum;
    }
};
