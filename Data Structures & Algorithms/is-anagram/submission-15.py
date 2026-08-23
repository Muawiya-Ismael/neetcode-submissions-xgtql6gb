class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        s_seen = {}
        t_seen = {}
        if len(s) != len(t):return False
        for i in range(len(s)):
            s_seen[s[i]] = s_seen.get(s[i], 0) + 1
            t_seen[t[i]] = t_seen.get(t[i], 0) + 1
        return s_seen == t_seen

