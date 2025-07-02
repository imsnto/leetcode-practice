func toLowerCase(s string) string {
    r := []rune(s)
    for idx, char := range s {
        if char >= 'A' && char <= 'Z' {
            r[idx] = char + ('a' - 'A')
        }
    }
    return string(r)
}