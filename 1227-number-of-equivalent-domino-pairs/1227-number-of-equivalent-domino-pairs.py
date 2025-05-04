class Solution(object):
    def numEquivDominoPairs(self, dominoes):
        """
        :type dominoes: List[List[int]]
        :rtype: int
        """
        for ar in dominoes:
            if ar[1] < ar[0]:
                ar[0], ar[1] = ar[1], ar[0]
        
        dominoes.sort()
        ans = 0
        cnt = 1
        for i in range(1, len(dominoes)):
            if dominoes[i] == dominoes[i-1]:
                cnt += 1 
            else:
                ans += (cnt *(cnt-1)) // 2
                cnt = 1
        ans += (cnt *(cnt-1)) // 2

        return ans
        