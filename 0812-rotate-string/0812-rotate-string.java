class Solution {
    public boolean rotateString(String s, String goal) {
        String t = s.concat(s);
        return s.length() == goal.length() && t.contains(goal) ;
    }
}