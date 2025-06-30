func max(a, b int) int {
    if a > b {
        return a
    }else{
        return b
    }
}
func findLHS(nums []int) int {
    cnt := make(map[int]int)
    for _, val := range nums {
        cnt[val] += 1 
    }
    ans := 0 
    for key, val := range cnt {
        if cnt[key-1] > 0 {
            ans = max(ans, cnt[key-1] + val)
        }
        if cnt[key+1] > 0{
            ans = max(ans, cnt[key + 1] + val)
        }
    }
    return ans
}