class Solution(object):
    def letterCombinations(self, digits):
        if not digits:
            return []

        phone = {'2': ['a', 'b', 'c'],
                 '3': ['d', 'e', 'f'],
                 '4': ['g', 'h', 'i'],
                 '5': ['j', 'k', 'l'],
                 '6': ['m', 'n', 'o'],
                 '7': ['p', 'q', 'r', 's'],
                 '8': ['t', 'u', 'v'],
                 '9': ['w', 'x', 'y', 'z']}
        quene = []
        flag = 1

        for i in digits:
            if flag:
                quene = phone[i]
                flag = 0
                continue
            for k in range(0, len(phone[i])):
                x = quene.pop(0)
                for j in phone[i]:
                    quene.append(x + j)

        return quene
