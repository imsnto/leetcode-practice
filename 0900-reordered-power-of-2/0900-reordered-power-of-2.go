func reorderedPowerOf2(n int) bool {
    ar := [30][10] int{}
    
    for i := 0; i<30; i++ {
        if (1 << i) <= int(1e9) {
            cnt := [10]int{}
            temp := 1 << i
            for temp > 0{
                cnt[temp%10] += 1
                temp /= 10 
            }
            ar[i] = cnt
        }
    }
    cnt := [10] int {}
    for n > 0{
        cnt[n%10] += 1
        n /= 10
    }
    for i:=0; i<30; i++ {
        if cnt == ar[i]{
            return true
        }
    }
    return false
}