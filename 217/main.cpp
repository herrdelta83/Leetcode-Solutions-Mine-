#include "bits/stdc++.h"
using namespace std;

class Solution {
public:
    void containsDuplicate(vector<int>& nums) {
        //initialize empty hash set
        unordered_set<int> us;
        //search through nums vector
        for(auto x : nums){
            auto it = us.find(x); // O(1)
            if (it != us.end())
                cout << "true" << endl;
            else 
                us.insert(x);          
        }
    }
};

int main() {
    Solution sol;
    int n;
    cin>>n;
    vector<int> nums (n);
    for (int i = 0; i < n; i++){
        cin >> nums[i];
    }
    sol.containsDuplicate(nums);
    return 0;
}