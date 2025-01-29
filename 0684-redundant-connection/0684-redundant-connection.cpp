class Solution {
public:
    int a, b;
    bool dfs(int v, int par, vector<set<int>>&g, vector<int>&vis){
        vis[v] = 1;
        cout << v << " " << par << endl;

        bool ans = false;
        for(int child: g[v]){
            if(child == par) continue;
            if(vis[child]){
                cout << child << " " << par << " " << v << endl;
                ans = true;
            } else {
                 ans |= dfs(child, v, g, vis);
            }
        }
        //cout << par << " " << v << endl;
        return ans;
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        vector<set<int>> g(n+1);
        for(auto e: edges){
             g[e[0]].insert(e[1]);
                g[e[1]].insert(e[0]);
            vector<int>vis(n+1);
            if(dfs(e[0], -1, g, vis) ) {
                return e;
            }
            else{
               
            }
        }

        return {};
    }
};