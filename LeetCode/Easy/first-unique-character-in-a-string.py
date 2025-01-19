class Solution:
    def firstUniqChar(self, word: str) -> int:
        count = {}
        for s in word:
            count[s] = 1 + count.get(s, 0)
        for key, value in count.items():
            if value == 1:
                return word.find(key)
        return -1
