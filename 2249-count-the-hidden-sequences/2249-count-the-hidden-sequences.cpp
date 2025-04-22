class Solution {
public:
    int numberOfArrays(vector<int>& diff, int lower, int upper) {
        vector<long long> temp{lower};
        long long int mn = lower, mx = lower;
         for(int i=0; i<diff.size(); i++){
            long long int curr = temp.back() + diff[i];
            temp.push_back(curr);  
            mx = max(mx, curr);
            mn = min(mn, curr);
         }

        //cout << mn << " " << mx << endl;
        if(mn < lower){
            int dist = lower - mn; 
            mx += dist;
        }



        return max(0LL, (upper - mx +1));
    }
};