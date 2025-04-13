class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& b) {
        map<string, bool> seen;
        
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                char number = b[i][j];
                if(number != '.') {
                    string row = string(1,number) + " in row " + to_string(i);
                    string col = string(1,number) + " in col " + to_string(j);
                    string block = string(1,number) + " in block " + to_string(i/3) + " and " + to_string(j/3);
                    
                    if(seen[row] or seen[col] or seen[block]) return false;
                    seen[row] = 1; seen[col] = 1 ; seen[block] = 1;
                }
            }
        }
        return true;
    }
};