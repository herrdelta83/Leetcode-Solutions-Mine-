from typing import List

class Solution(object):
    def runningSum(self, nums: List[int]) -> List[int]:
        ans = []
        store = 0
        for i in nums:
            store = i + store
            ans.append(store)
        return ans


if __name__ == "__main__":
    sol = Solution()
    print(sol.runningSum([1,2,3,4]))  # Expected: