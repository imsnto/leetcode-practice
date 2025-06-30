
func findLHS(nums []int) int {
    sort.Ints(nums)
    l, r := 0, 1
    maxLen := 0

    for r < len(nums) {
        diff := nums[r] - nums[l]
        if diff == 1 {
            maxLen = max(maxLen, r - l + 1)
        }
        if diff <= 1 {
            r ++
        }else {
            l ++
        }
    }
    return maxLen
}