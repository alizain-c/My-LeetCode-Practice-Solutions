class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        resolve = defaultdict(list) # mapping charCount to list of Anagrams
        
        for s in strs:
            count = [0] * 26 # a...z
            
            for c in s:
                count[ord(c) - ord("a")] += 1
        
            resolve[tuple(count)].append(s)
        
        return resolve.values()
