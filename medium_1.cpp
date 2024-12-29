#include <bits/stdc++.h>
using namespace std;
vector<int> nextGreaterElement(const vector<int>& nums) {
    vector<int> result(nums.size(), -1);
    stack<int> s;
    for (int i = 0; i < nums.size(); ++i) {
        while (!s.empty() && nums[s.top()] < nums[i]) {
            result[s.top()] = nums[i];
            s.pop();
        }
        s.push(i);
    }
    return result;
}
int main() {
    vector<int> nums = {4, 5, 2, 10, 8};
    vector<int> result = nextGreaterElement(nums);
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}
