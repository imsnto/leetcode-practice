func maxSum(nums []int) int {
    sort.Ints(nums)
    ans := 0
    prev := -200
    for _, val := range nums {
        if val > 0 && prev != val {
            ans += val
        }
        prev = val
    }
    if (ans == 0) {
        ans = nums[len(nums) - 1 ]
    }
    return ans

}