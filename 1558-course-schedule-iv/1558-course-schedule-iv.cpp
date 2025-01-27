class Solution {
public:

    bool dfs(int i, vector<int>&vis, vector<vector<int>>&g, int target){
        vis[i] = 1;
        if(i == target) return true;

        int answer = false;
        for(int val: g[i]){
            if(vis[val] == 0){
                answer |= dfs(val, vis, g, target);
            }
        }
        return answer;
    }
    vector<bool> checkIfPrerequisite(int n, vector<vector<int>>& prerequisites, vector<vector<int>>& queries) {
    
        vector<vector<int>> g(n, vector<int>());
        for(auto it: prerequisites){
            g[it[0]].push_back(it[1]);
        }
     
       
        int q = queries.size();
        vector<bool> ans;



        for(int i=0; i<queries.size(); i++){
            int u  = queries[i][0];
            int v = queries[i][1];
        vector<int> vis(n);

            ans.push_back(dfs(u, vis, g, v));
        }

        return ans;
    }
};