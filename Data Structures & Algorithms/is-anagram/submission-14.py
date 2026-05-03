class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        seen_s = {}
        seen_t = {}
        if len(s) != len(t): return False
        for i in range(len(s)):
            seen_s[s[i]] = 1  + seen_s.get(s[i],0)
            seen_t[t[i]] = 1 + seen_t.get(t[i], 0)
        return seen_t == seen_s        