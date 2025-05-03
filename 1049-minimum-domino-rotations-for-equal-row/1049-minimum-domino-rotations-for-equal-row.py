class Solution(object):
    def minDominoRotations(self, tops, bottoms):
        """
        :type tops: List[int]
        :type bottoms: List[int]
        :rtype: int
        """
        cntTop , cntBottom = [0] * 7, [0] * 7

        for i in range(len(tops)):
            cntTop[tops[i]] += 1 
            cntBottom[bottoms[i]] += 1 
        
        for i in range(len(tops)):
            if tops[i] == bottoms[i]:
                if cntTop[tops[i]] < cntBottom[tops[i]]:
                    cntTop[tops[i]] -= 1
                else:
                    cntBottom[tops[i]] -= 1

        ans = 10 ** 10 
        for i in range(1, 7):
            if cntTop[i] + cntBottom[i] >= len(tops):
                ans = min(len(tops) - cntTop[i], len(tops) - cntBottom[i])
            
        return -1 if ans == 10 ** 10 else max(0, ans)
        