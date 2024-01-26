class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        // Create a monotonic stack such that you only push the element if it is empty or the top is more than the upcoming element.
        // Else push the subtraction of the index in the index of the top.
        stack<int> s;
        for (int i = 0; i < temperatures.size(); i++) {
            while (!s.empty() && temperatures[i] > temperatures[s.top()]) {
                int j = s.top();
                s.pop();
                temperatures[j] = i - j;
            }
            s.push(i);
        }
        while (!s.empty()) {
            int i = s.top();
            s.pop();
            temperatures[i] = 0;
        }
        return temperatures;
    }
};