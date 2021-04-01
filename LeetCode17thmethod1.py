class Solution:
    def letterCombinations(self, digits):
        d = {'2':'abc' , '3':'def' , '4':'ghi' , '5':'jkl' , '6':'mno', '7':'pqrs', '8':'tuv', '9':'wxyz'}
        if not digits:
            return []
        res = ['']
        for i in digits:
            length = len(res)
            for n in range(length):
                temp = res.pop(0)
                for j in d[i]:
                    res.append(''.join([temp, j]))
        return res
