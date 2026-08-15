class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        possible = list(s)
        t= list(t)
        for i in t:
            try:
                possible.remove(i)
            except:
                return False
        if len(possible) != 0:
            return False
        return True