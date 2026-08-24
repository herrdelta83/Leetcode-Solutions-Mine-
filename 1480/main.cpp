#include "bits/stdc++.h"
using namespace std;

class Solution {
public:
    void runningSum(vector<int>& nums) {
        int store = 0;
        vector<int> ans (nums.size());

        for (size_t i = 0; i < nums.size(); i++){
            store = nums[i] + store;
            ans.push_back(store);
        }
    }
};

int main() {
    Solution sol;
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++){
        cin >> nums[i];
    }
    sol.runningSum(nums);
    return 0;
}