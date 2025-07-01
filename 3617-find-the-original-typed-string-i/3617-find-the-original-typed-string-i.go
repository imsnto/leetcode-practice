func possibleStringCount(word string) int {
    total := 1
    prev := '0'
    curr := 0
    for _, char := range word {
        if prev == char {
            curr ++
        }else{
            total += curr 
            curr = 0
            prev = char
        }
    }
    total += curr
    return total
}