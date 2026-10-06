class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        dicc={}
        for i in nums:
            print(i)
            if i in dicc:
                return True
            else:
                dicc[i]=1

        return False

        