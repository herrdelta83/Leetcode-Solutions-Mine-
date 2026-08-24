from typing import List

class Solution(object):
    def getConcatenation(self, nums: List[int]) -> List[int]:
        ans = nums + nums
        return ans

if __name__ == "__main__":
    sol = Solution()
    print(sol.getConcatenation([1, 2, 1]))