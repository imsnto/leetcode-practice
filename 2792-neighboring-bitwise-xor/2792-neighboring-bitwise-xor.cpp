class Solution {
public:
    bool doesValidArrayExist(vector<int>& d) {
        int ans = accumulate(d.begin(), d.end(), 0);
        return ans % 2 ==  0;
    }
};