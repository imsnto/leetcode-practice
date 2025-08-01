func isValid(s string) bool {
    
    ar := []rune{}
    for _, sym := range s{
        if len(ar) > 0    {
            if sym == ')' && ar[len(ar)-1] == '('{
                ar = ar[:len(ar)-1]
            }else if sym == '}' && ar[len(ar)-1] == '{' {
                ar = ar[:len(ar)-1]
            }else if sym == ']' && ar[len(ar)-1] == '[' {
                ar = ar[:len(ar)-1]
            }else {
                ar = append(ar, sym)
            }
        }else {
            ar = append(ar, sym)
        }
    }
    return len(ar) == 0
}