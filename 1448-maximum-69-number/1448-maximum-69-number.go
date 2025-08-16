func maximum69Number (num int) int {
    var ar []int 
    res := 0

    for num > 0 {
        ar = append(ar, num % 10) 
        num /= 10

    }
    mx := 1
    for i:=len(ar)-1; i>=0; i-- {
        if ar[i] == 6 && mx > 0 {
            ar[i] = 9
            mx --
        }
        res = res * 10 + ar[i]
    }

    return res
}