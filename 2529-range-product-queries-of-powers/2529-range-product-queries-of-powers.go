func bigMod(a int, b int, mod int) int {
    if b == 0{
        return 1
    }

    res := bigMod(a, b/2, mod)
    res = ((res % mod) * (res % mod)) %mod
    if b % 2 == 1{
        res = ((res % mod) * (a % mod)) % mod
    }
    return res 

}

func productQueries(n int, queries [][]int) []int {
    var ans []int 
    var powers [] int

    for i:= 0; i<=30; i++ {
        if (1<<i) & n > 0 {
            powers = append(powers, i)
        }
    }
    power_size := len(powers)
    for i := 1; i<power_size; i++ {
        powers[i] += powers[i-1]
    }

    for _, val := range queries{
        left, right := val[0], val[1]

        total := powers[right]
        if left > 0 {
            total -= powers[left-1]
        }


        mod := int(1e9 + 7)
        result := bigMod(2, total, mod) 
        ans = append(ans, result) 
        
    }
    return ans
}