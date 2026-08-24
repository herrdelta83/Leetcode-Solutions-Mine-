class Solution(object):
    def containsDuplicate(self, nums):
        seen = [] #empty set to store seen x numbers
        for x in nums:
            if x in seen:
                return True
            seen.append(x)
        return False


if __name__ == "__main__":
    sol = Solution()
    print(sol.containsDuplicate([1, 2, 3, 1]))  #Expected: True
    print(sol.containsDuplicate([1, 2, 3, 4]))  #Expected: False