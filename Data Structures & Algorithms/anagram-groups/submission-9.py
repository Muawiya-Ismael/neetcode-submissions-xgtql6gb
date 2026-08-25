class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        hashmap = {}
        result = List[List[str]]
        for s in strs:
            word = s
            sorted_word = ''.join(sorted(word))
            if sorted_word not in hashmap:
                hashmap[sorted_word] = []
            hashmap[sorted_word].append(word)           
        return list(hashmap.values())