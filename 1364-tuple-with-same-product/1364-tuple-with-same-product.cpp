class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        map<int, vector<pair<int,int>>> mp;
        int n = nums.size();

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                mp[nums[i] * nums[j]].push_back({i,j});
            }
        }

        int ans = 0; 
        set<int> st;

        for(auto it: mp){
            int key = it.first;
            vector<pair<int,int>> vp = it.second;

            int sz = vp.size();
            set<int> ar;
            for(pair<int,int> p: vp){
                if(!st.count(p.first) and !st.count(p.second) and !ar.count(p.first) and !ar.count(p.second)){
                    ar.insert(p.first); 
                    ar.insert(p.second);
                }
            }

            ans += (sz * (sz-1) / 2) * 8;
            // cout << key << " " <<sz << " " << ar.size() << endl;
            // if(ar.size() > 1){
            //     int nn = ar.size();
            //     nn = (nn * (nn-1)) / 2;
            //     ans = 8 * nn;
            //     for(int i: ar) st.insert(i);
            // }
        }
        return ans;
    }
};