class Solution {
public:
    int minCost(vector<vector<int>>& g) {
        int r = g.size(), c = g[0].size();
        vector<vector<int>> mn(r, vector<int>(c, INT_MAX));
        mn[0][0] = 0;

        while(true){
            vector<vector<int>> pv = mn;

            // forward pass
            for(int i=0; i<r; i++){
                for(int j=0; j<c; j++){
                    if(i>0)
                        mn[i][j] = min(mn[i][j], mn[i-1][j] + (g[i-1][j] == 3 ? 0:1 ));

                    if(j>0)
                        mn[i][j] = min(mn[i][j], mn[i][j-1] + (g[i][j-1] == 1 ? 0:1 ));
                }
            }

            // backward pass
            for(int i=r-1; i>=0; i--){
                for(int j=c-1; j>=0; j--){
                    if(i < r-1) 
                        mn[i][j] = min(mn[i][j], mn[i+1][j] + (g[i+1][j] == 4 ?0:1) );
                    if(j < c-1)
                        mn[i][j] = min(mn[i][j], mn[i][j+1] + (g[i][j+1] == 2?0:1));
                }
            }

            if(pv == mn) break;
        }
        return mn[r-1][c-1];
    }
};