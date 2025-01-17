class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        short ans = 0;
        for(int i:derived){
            ans ^= i;
        }
        return ans == 0;
    }
};