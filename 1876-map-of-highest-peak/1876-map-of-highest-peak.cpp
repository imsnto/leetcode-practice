int dx[4] = {0, 0, 1, -1};
int dy[4] = {-1, 1, 0, 0};

class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int n = isWater.size(), m = isWater[0].size();
        vector<vector<int>> ans(n, vector<int>(m, -1));

        queue<pair<int,int>> q;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(isWater[i][j]) {
                    q.push({i,j});
                    ans[i][j] = 0;
                }
            }
        }

        while(!q.empty()){
            auto [ii, jj] = q.front();
            q.pop();
            for(int i=0; i<4; i++){
                int newX = ii + dx[i];
                int newY = jj + dy[i];

                if(newX >=0 and newX<n and newY>=0 and newY<m and ans[newX][newY] == -1){
                    ans[newX][newY] = ans[ii][jj] + 1;
                    q.push({newX, newY});
                }
            }
        }

        return ans;
    }
};