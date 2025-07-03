func kthCharacter(k int) byte {
    s := []rune{'a'}
    for len(s) < k {
        nextS := make([]rune, len(s))
        for i, char := range s {
            if char == 'z' {
                nextS[i] = 'a'
            } else {
                nextS[i] = char + 1
            }
        }
        s = append(s, nextS...)
    }
    return byte(s[k-1])
}