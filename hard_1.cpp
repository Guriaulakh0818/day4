#include<bits/stdc++.h>
using namespace std;
int largestRectangleArea(vector<int>& heights) {
    stack<int> s;
    heights.push_back(0);
    int maxArea = 0;
    for (int i = 0; i < heights.size(); i++) {
        while (!s.empty() && heights[s.top()] > heights[i]) {
            int h = heights[s.top()];
            s.pop();
            int w = s.empty() ? i : i - s.top() - 1;
            maxArea = max(maxArea, h * w);
        }
        s.push(i);
    }
    return maxArea;
}
int main() {
    vector<int> heights = {2, 1, 14, 6, 9, 3};
    cout << "The area of the largest rectangle is: " << largestRectangleArea(heights) << endl;
    return 0;
}
