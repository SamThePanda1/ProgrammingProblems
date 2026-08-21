class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        #holds the start of the sliding window
        slidingWindow = 0
        longest = 0
        characterMap = {}
        if (len(s))==1:
            return 1
        for i in range(len(s)):
            if s[i] in characterMap:
                
                #we do max so that we don't move our sliding windows backwards and create a loop
                #imagine we have abcdba if we move our sliding window to a+1, then we get the
                slidingWindow = max(characterMap[s[i]]+1,slidingWindow)
            characterMap[s[i]]=i
            longest = max(longest, i-slidingWindow+1)
        return longest
                
        