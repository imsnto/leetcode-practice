
func plusOne(digits []int) []int {
    ret := make([]int, 0)
    rem := 1

    for i := len(digits)-1; i>=0; i-- {
        rem += digits[i]
        ret = append(ret, rem% 10)
        rem /= 10
    }
    if rem > 0{
        ret = append(ret, rem)
    }
    
    func(arr []int ) {
        for i := range len(arr) / 2 {
            arr[i], arr[len(arr)-i-1] = arr[len(arr)-i-1], arr[i]
        }
    }(ret)

    return ret
}