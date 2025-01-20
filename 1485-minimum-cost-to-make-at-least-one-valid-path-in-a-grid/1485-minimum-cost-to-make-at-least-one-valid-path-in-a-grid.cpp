class Solution {
public:
    int minCost(vector<vector<int>>& g) {
        int r = g.size(), c = g[0].size();
        vector<vector<int>> mn(r, vector<int>(c, INT_MAX));
        vector<vector<int>> dirs = {{0,1}, {0,-1}, {1,0}, {-1, 0}}; 
                                   // right left    down    up
        priority_queue<vector<int>, vector<vector<int>>, greater<>> pq;
        pq.push({0,0,0});
        mn[0][0] = 0;

        while(!pq.empty()){
            auto curr = pq.top();
            pq.pop();
            int cost = curr[0], row = curr[1], col = curr[2];

            if(mn[row][col] != cost) continue;

            for(int dir =0; dir<4; dir++){
                int newR = row + dirs[dir][0];
                int newC = col + dirs[dir][1];

                if(newR >=0 && newR < r && newC>=0 && newC < c){
                    int newCost = cost + (dir != (g[row][col]-1) ? 1 : 0);
                    
                    if(mn[newR][newC] > newCost){
                        mn[newR][newC] = newCost;
                        pq.push({newCost, newR, newC});
                    }
                }
            }

        }

        return mn[r-1][c-1];
    }
};