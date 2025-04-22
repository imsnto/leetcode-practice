class Solution {
public:
    int numberOfArrays(vector<int>& diff, int lower, int upper) {
        long long prev = lower;
        long long int mn = lower, mx = lower;
        int n = diff.size();
         for(int i=0; i<n; i++){
            long long int curr = prev + diff[i];
            prev  = curr; 
            mx = max(mx, curr);
            mn = min(mn, curr);
         }

        if(mn < lower){
            int dist = lower - mn; 
            mx += dist;
        }



        return max(0LL, (upper - mx +1));
    }
};