class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        ss = []
        largest = 0
        for i in s:
            if i in ss:
                while i in ss:
                    ss.pop(0)
            ss.append(i)
            largest = max(largest, len(ss))
        return largest
