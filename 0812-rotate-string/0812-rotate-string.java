class Solution {
    public boolean rotateString(String s, String goal) {
        if(s.length() > goal.length()) return false;
        String t = s.concat(s);
        return t.indexOf(goal) >= 0;
    }
}