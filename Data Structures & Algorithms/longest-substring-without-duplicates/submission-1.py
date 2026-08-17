class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        lastIndex = {}
        startOfWindow = 0
        longest = 0
        result = 0
        for i in range(len(s)):
            if s[i] in lastIndex:
                startOfWindow = max(startOfWindow, lastIndex[s[i]]+1)
            lastIndex[s[i]] = i
            result = max(result, i - startOfWindow+1)
        return result