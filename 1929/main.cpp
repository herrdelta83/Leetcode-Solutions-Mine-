#include "bits/stdc++.h"
using namespace std;

class Solution {
public:
    void getConcatenation(vector<int>& nums) {
         //initialize answer vector with nums
        vector<int> ans(nums.begin(), nums.end());
        
        //element
        int it;

        for (size_t i = 0; i < nums.size(); i++){
            //add elements through nums vector
            it = nums[i];
            ans.push_back(it);
        }
        
        //print
        for (size_t i = 0; i < ans.size(); i++){
            cout << ans[i];
        }
    }
};

int main() {
    Solution sol;
    int n;
    cin >> n;
    vector<int> nums (n);
    for (int i = 0; i < n; i++){
        cin >> nums[i];
    }
    sol.getConcatenation(nums);
    return 0;
}